#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator() : pizza(nullptr) {}

PizzaDecorator::PizzaDecorator(Pizza* pizza) : pizza(pizza) {}

PizzaDecorator::~PizzaDecorator() {delete pizza;}

double PizzaDecorator::getPrice() const {return pizza->getPrice();}

std::string PizzaDecorator::getName() const {return pizza->getName();}

void PizzaDecorator::printPizza() const {pizza->printPizza();}
