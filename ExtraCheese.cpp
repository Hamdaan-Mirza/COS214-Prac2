#include "ExtraCheese.h"

ExtraCheese::ExtraCheese() : PizzaDecorator() {}

ExtraCheese::ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

ExtraCheese::~ExtraCheese() {}

double ExtraCheese::getPrice() const {
    return PizzaDecorator::getPrice() + 5.00;   
}

std::string ExtraCheese::getName() const {
    return PizzaDecorator::getName() + " + Extra Cheese";
}

void ExtraCheese::printPizza() const {
    PizzaDecorator::printPizza();
}
