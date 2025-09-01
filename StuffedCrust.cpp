#include "StuffedCrust.h"

StuffedCrust::StuffedCrust() : PizzaDecorator() {}

StuffedCrust::StuffedCrust(Pizza* pizza) : PizzaDecorator(pizza) {}

StuffedCrust::~StuffedCrust() {}

double StuffedCrust::getPrice() const {
    return pizza->getPrice() + 20.00;
}

std::string StuffedCrust::getName() const {
    return pizza->getName() + " + Stuffed Crust";
}

//void StuffedCrust::printPizza() const {PizzaDecorator::printPizza();}
