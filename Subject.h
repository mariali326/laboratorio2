//
// Created by Maria on 19/05/2022.
//

#ifndef LABORATORIO_SUBJECT_H
#define LABORATORIO_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual ~Subject(){}
    virtual void subscribe(Observer* observer) = 0;
    virtual void unsubscribe(Observer* observer) = 0;
    virtual void notify() = 0;
};

#endif //LABORATORIO_SUBJECT_H
