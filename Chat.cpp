//
// Created by Maria on 19/05/2022.
//

#include "Chat.h"

Chat::Chat(const User& mn, const User& on):myName(mn.getName()), otherName(on.getName()) {}

Chat::~Chat() {
    for (auto obs:observers)
        observers.remove(obs);
}

void Chat::addMessage(const Message& newMsg){
    if((myName==newMsg.getReceiver()||myName==newMsg.getSender())&&(otherName==newMsg.getSender()||otherName==newMsg.getReceiver()))
        messages.push_back(newMsg);
    if(myName==newMsg.getReceiver())
        this->notify();
}

const Message& Chat::lastMessage() const{
    return messages.back();
}

void Chat::readMessage(int i){
    if(i>0 && i<messages.size()) {
        if (messages[i].getSender() == otherName) {
            std::cout <<"Sender: "<< messages[i].getSender() <<", "<<"Receiver: "<< messages[i].getReceiver() << std::endl;
            std::cout <<"Text: "<< messages[i].getText() << std::endl;
            messages[i].setRead(true);
            this->notify();
        }
    }
    else
        throw std::out_of_range(" Message not present on chat");
}
int Chat::getUnreadMessages() const{
    int i=0;
    for(const auto& message:messages)
        if(message.getReceiver()==myName)
            if (!message.isRead())
                i++;
    return i;
}
void Chat::subscribe(Observer* observer) {
    observers.push_back(observer);
}
void Chat::unsubscribe(Observer* observer) {
    observers.remove(observer);
}
void Chat::notify() {
    for (auto observer:observers)
        observer->update();
}

void Chat::setMyName(const std::string &myName) {
    Chat::myName = myName;
}

const std::string &Chat::getMyName() const {
    return myName;
}

void Chat::setOtherName(const std::string &otherName) {
    Chat::otherName = otherName;
}

const std::string &Chat::getOtherName() const {
    return otherName;
}

