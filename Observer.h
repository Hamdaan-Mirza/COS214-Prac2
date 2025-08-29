#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer{
public:
    virtual void update(String message) = 0;
};

class Customer : public Observer {
public:
    virtual void update(String message);
}

class Website : public Observer {
public:
    virtual void update(String message);
}

#endif