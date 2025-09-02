#include "StuffedCrust.h"

StuffedCrust::StuffedCrust() : PizzaDecorator() {}

StuffedCrust::StuffedCrust(Pizza* pizza) : PizzaDecorator(pizza) {}

StuffedCrust::~StuffedCrust() {}

double StuffedCrust::getPrice() const {
    if (!pizza) return 0.00; 
    return pizza->getPrice() + 20.00;
}

std::string StuffedCrust::getName() const {
    if (!pizza) return "No  extra topping to add";
    return pizza->getName() + " + Stuffed Crust";
}

//void StuffedCrust::printPizza() const {PizzaDecorator::printPizza();}
