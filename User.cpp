//
// Created by Maria on 19/05/2022.
//

#include "User.h"

User::~User() {
    if(!chats.empty()){
        chats.clear();
    }
}

void User::createChat(const User& u){
    Chat newChat(*this, u);
    chats.insert(std::make_pair(u.getName(),&newChat));
}

void User::removeChat(const User& u){
    auto it=chats.find(u.getName());
    chats.erase(it);
}
