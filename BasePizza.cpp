#include "BasePizza.h"

BasePizza::BasePizza() {}

BasePizza::~BasePizza() {}

double BasePizza::getPrice() const {
    double total = 0;
    for (const auto& topping : toppings) {
        total += topping->getPrice();
    }
    return total;
}

std::string BasePizza::getName() const {
    std::string name = "Base Pizza";
    for (const auto& topping : toppings) {
        name += " + " + topping->getName();
    }
    return name;
}

void BasePizza::printPizza() const {
    std::cout << getName() << ": R" << getPrice() << std::endl;
}

std::vector<PizzaComponent*> BasePizza::getToppings() const {return toppings;}
