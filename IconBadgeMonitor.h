//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_ICONBADGEMONITOR_H
#define LABORATORIO_ICONBADGEMONITOR_H

#include <vector>
#include <list>
#include "Observer.h"
#include "Chat.h"
#include "Subject.h"


class IconBadgeMonitor: public Observer {
public:
     IconBadgeMonitor(Chat* sub):subject(sub){}

    virtual ~IconBadgeMonitor(){}

    virtual void attach() override;

    virtual void detach() override;

    virtual void update() override;

    void draw(int um);

private:
    Chat* subject;
};

#endif //LABORATORIO_ICONBADGEMONITOR_H
