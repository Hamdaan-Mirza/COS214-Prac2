#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator() : pizza(nullptr) {}

PizzaDecorator::PizzaDecorator(Pizza* pizza) : pizza(pizza) {}

PizzaDecorator::~PizzaDecorator() {delete pizza;}

// void PizzaDecorator::printPizza() const {
//     if(pizza) pizza->printPizza();
// }

double PizzaDecorator::getPrice() const {
    if(pizza) return pizza->getPrice();
    else return 0.0;
}

std::string PizzaDecorator::getName() const {
    if(pizza) return pizza->getName();
    else return "Pizza not defined";
}