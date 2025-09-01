#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator() : pizza(nullptr) {}

PizzaDecorator::PizzaDecorator(Pizza* pizza) : pizza(pizza) {}

PizzaDecorator::~PizzaDecorator() {delete pizza;}

void PizzaDecorator::printPizza() const {
    if(pizza) pizza->printPizza();
}
