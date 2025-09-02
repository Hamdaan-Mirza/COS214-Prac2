#include "ExtraCheese.h"

ExtraCheese::ExtraCheese() : PizzaDecorator() {}

ExtraCheese::ExtraCheese(Pizza* pizza) : PizzaDecorator(pizza) {}

ExtraCheese::~ExtraCheese() {}

double ExtraCheese::getPrice() const {
    if (!pizza) return 0.00; 
    return pizza->getPrice() + 18.00;   
}

std::string ExtraCheese::getName() const {
    if (!pizza) return "No topping to add";
    return pizza->getName() + " + Extra Cheese";
}

//void ExtraCheese::printPizza() const { PizzaDecorator::printPizza();}
