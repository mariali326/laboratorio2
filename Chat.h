//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_CHAT_H
#define LABORATORIO_CHAT_H

#include <iostream>
#include <vector>
#include <list>

#include "User.h"
#include "Message.h"
#include "Subject.h"

class Chat : public Subject {
public:
    explicit Chat(const User& mn, const User& on);

    ~Chat() override;

    void addMessage(const Message& newMsg);

    const Message& lastMessage() const;

    void readMessage(int i);

    int getUnreadMessages() const;

    int getReadMessages() const;

    int getTotalMessages() const;

    void showTotalMessages() const;

    void subscribe(Observer* observer) override;

    void unsubscribe(Observer* observer) override;

    void notify() override;

    const std::string &getMyName() const;

    void setMyName(const std::string &myName);

    const std::string &getOtherName() const;

    void setOtherName(const std::string &otherName);

private:
    std::list<Observer*> observers;
    std::vector<Message> messages;
    std::string myName;
    std::string otherName;
};


#endif //LABORATORIO_CHAT_H
