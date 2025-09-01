#ifndef ORDER_H
#define ORDER_H

#include "DiscountStrategy.h"

class Order{
public:
    Order();
    ~Order();
    void setDiscount(DiscountStrategy* strategy);
    void applyDiscount(double totalPrice);
    void setState(OrderState* state);
    void handleState();
    
private:
    DiscountStrategy* strategy;
    OrderState* state;
    double totalPrice;
    int number;
};

#endif