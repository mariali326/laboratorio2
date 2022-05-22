//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_USER_H
#define LABORATORIO_USER_H

#include <iostream>
#include <memory>
#include <map>
#include "Chat.h"

#include <iostream>
#include <map>
#include "Chat.h"

class Chat;
class User {
public:
    User(std::string name) : name(name) {}

    ~User();

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        User::name = name;
    }

    void createChat(const User& u);
    void removeChat(const User& u);

private:
    std::string name;
    std::map <std::string,Chat*> chats;
};

#endif //LABORATORIO_USER_H
