#include "StuffedCrust.h"

StuffedCrust::StuffedCrust() : PizzaDecorator() {}

StuffedCrust::StuffedCrust(Pizza* pizza) : PizzaDecorator(pizza) {}

StuffedCrust::~StuffedCrust() {}

double StuffedCrust::getPrice() const {
    return PizzaDecorator::getPrice() + 3.00;
}

std::string StuffedCrust::getName() const {
    return PizzaDecorator::getName() + " + Stuffed Crust";
}

void StuffedCrust::printPizza() const {PizzaDecorator::printPizza();}
