#include "Order.h"

Order::Order(){
    strategy = new RegularPrice;
    state = new Placed;
}
Order::~Order(){
    delete strategy;
}
void Order::setDiscount(DiscountStrategy* strategy){
    this->strategy = strategy; 
}
void Order::applyDiscount(double totalPrice){
    strategy->applyDiscount(totalPrice);
}

void Order::setState(OrderState* state){
    this->state = state;
}
void Order::handleState(){
    state->handleOrder(this);
}