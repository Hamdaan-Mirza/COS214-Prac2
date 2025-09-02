#ifndef ORDERSTATE_H
#define ORDERSTATE_H

#include <iostream>

class Order;

class OrderState
{
public:
    virtual void handleOrder(Order* order) = 0;
};

class Placed : public OrderState
{
public:
    virtual void handleOrder(Order* order);
};

class Preparing : public OrderState {
public:
    virtual void handleOrder(Order* order);
};

class QualityCheck : public OrderState {
public:
    virtual void handleOrder(Order* order);
};

class Packing : public OrderState {
    virtual void handleOrder(Order* order);
};

class Ready : public OrderState {
public:
    virtual void handleOrder(Order* order);
};

#endif