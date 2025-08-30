#ifndef ORDER_H
#define ORDER_H

#include "DiscountStrategy.h"

class Order{
public:
    Order();
    ~Order();
    void setDiscount(DiscountStrategy* discount);
    void applyDiscount(double totalPrice);
    
private:
    DiscountStrategy* discount;
    OrderState* state;
    double totalPrice;
    int number;
};

#endif