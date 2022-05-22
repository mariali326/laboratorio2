//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_MESSAGE_H
#define LABORATORIO_MESSAGE_H

#include <iostream>
#include <vector>
#include <list>
#include <ctime>

class Message{
public:
    Message(std::string se, std::string re, std::string te, bool r = false): sender(se), receiver(re), text(te), read(r){
        time(&currentTime);
    }
    const std::string & getSender() const {
        return sender;
    }

    const std::string & getReceiver() const {
        return receiver;
    }

    const std::string & getText() const {
        return text;
    }
    bool isRead() const {
        return read;
    }
    void setRead(bool read) {
        Message::read = read;
    }

    time_t getCurrentTime() const {
        return currentTime;
    }

private:
    bool read;
    std::string sender, receiver, text;
    time_t currentTime;
};

#endif //LABORATORIO_MESSAGE_H
