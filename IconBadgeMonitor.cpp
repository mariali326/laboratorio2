//
// Created by Maria on 19/05/2022.
//

#include "IconBadgeMonitor.h"


void IconBadgeMonitor::attach(){
    subject->subscribe(this);
}

void IconBadgeMonitor::detach() {
    subject->unsubscribe(this);
}

void IconBadgeMonitor::update() {
    this->draw(subject->getUnreadMessages());
}

void IconBadgeMonitor::draw(int um){
    std::cout << "You have " << um <<" unread messages" << std::endl;
}
