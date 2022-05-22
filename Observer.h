//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_OBSERVER_H
#define LABORATORIO_OBSERVER_H

class Observer {
public:
    virtual ~Observer(){}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
};

#endif //LABORATORIO_OBSERVER_H
