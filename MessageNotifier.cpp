//
// Created by Maria on 19/05/2022.
//

#include "MessageNotifier.h"

void MessageNotifier::attach() {
    subject->subscribe(this);
}
void MessageNotifier::detach(){
    subject->unsubscribe(this);
}
void MessageNotifier::update()  {
    if (active)
        this->draw(subject->lastMessage());
}

void MessageNotifier::draw (const Message &ms){
    char buffer [100];
    time_t time =ms.getCurrentTime();
    struct tm *localTime = localtime (& time);
    strftime(buffer, 100, "%H:%M", localTime);
    std::cout << "Message notifier:"<< std::endl;
    std::cout << "The last message sent at "<< buffer << " from " << ms.getSender() << " to " << ms.getReceiver() << std::endl;
    std::cout << "Text: " << ms.getText() << std::endl;
}
