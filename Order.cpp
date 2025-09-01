#include "Order.h"

Order::Order(DiscountStrategy* strategy, double totalPrice, int number){
    this->strategy = strategy;
    this->state = new Placed;
    this->totalPrice = totalPrice;
    this->number = number;
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

int Order::getNumber(){
    return number;
}

bool Order::ishighQuality() {
    static unsigned int seed = 12345; 
    seed = (seed * 1103515245 + 12345) % 2147483648; 
    return (seed % 10 < 9); 
}