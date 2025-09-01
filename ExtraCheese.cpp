#include "ExtraCheese.h"

ExtraCheese::ExtraCheese() : PizzaDecorator() {}

ExtraCheese::ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

ExtraCheese::~ExtraCheese() {}

double ExtraCheese::getPrice() const {
    return pizza->getPrice() + 18.00;   
}

std::string ExtraCheese::getName() const {
    return pizza->getName() + " + Extra Cheese";
}

//void ExtraCheese::printPizza() const { PizzaDecorator::printPizza();}
