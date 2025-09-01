#include "Order.h"

Order::Order(DiscountStrategy* strategy, double totalPrice, int number){
    this->strategy = strategy;
    this->state = new Placed;
    this->totalPrice = totalPrice;
    this->number = number;
    this->qualityApproved = false;
} 

Order::~Order(){
    delete state;
}

void Order::applyDiscount(double totalPrice){
    totalPrice = strategy->applyDiscount(totalPrice);
}

void Order::setState(OrderState* state){
    delete this->state;
    this->state = state;
}

void Order::handleState(){
    state->handleOrder(this);
}

double Order::getTotalPrice(){
    return totalPrice;
}

double Order::getNumber(){
    return number;
}