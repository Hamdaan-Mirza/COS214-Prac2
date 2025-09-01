#ifndef ORDER_H
#define ORDER_H

#include "DiscountStrategy.h"
#include "OrderState.h"

class Order{
public:
    Order(DiscountStrategy* strategy, double totalPrice, int number);
    ~Order();
    void applyDiscount(double totalPrice);
    void setState(OrderState* state);
    void handleState();
    double getTotalPrice();
    int getNumber();
    bool ishighQuality();

private:
    DiscountStrategy* strategy;
    OrderState* state;
    double totalPrice;
    int number;
};

#endif