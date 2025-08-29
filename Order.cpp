#include "Order.h"

Order::Order(){
    discount = new RegularPrice;
}
Order::~Order(){
    delete discount;
}
void Order::setDiscount(DiscountStrategy* discount){
    this->discount = discount; 
}
void Order::applyDiscount(double totalPrice){
    discount->applyDiscount(totalPrice);
}