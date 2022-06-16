//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_MESSAGENOTIFIER_H
#define LABORATORIO_MESSAGENOTIFIER_H

#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <ctime>

#include "Message.h"
#include "Observer.h"
#include "Chat.h"


#include <iostream>
#include <vector>
#include <list>
#include <ctime>

#include "Message.h"
#include "Observer.h"
#include "Chat.h"


class MessageNotifier: public Observer{
public:
    MessageNotifier(bool act, Chat* sub) : active(act), subject(sub){}
    virtual ~MessageNotifier(){}

    void attach() override;

    void detach() override;

    void update() override ;

    void draw(const Message &ms);

    bool isActive() const {
        return active;
    }

    void setActive(bool active) {
        MessageNotifier::active = active;
    }

private:
    bool active;
    Chat* subject;
};

#endif //LABORATORIO_MESSAGENOTIFIER_H
