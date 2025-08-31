#include "Order.h"

Order::Order(){
    discount = new RegularPrice;
    state = new Placed;
}
Order::~Order(){
    delete discount;
}
void Order::setDiscount(DiscountStrategy* strategy){
    this->discount = discount; 
}
void Order::applyDiscount(double totalPrice){
    discount->applyDiscount(totalPrice);
}