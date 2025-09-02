#include "BasePizza.h"
#include "ToppingGroup.h"

BasePizza::BasePizza() {}

BasePizza::~BasePizza() {
    for(int i = 0; i < toppings.size(); i++) delete toppings[i];
}

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

void BasePizza::printPizza() const {Pizza::printPizza();}

std::vector<PizzaComponent*> BasePizza::getToppings() const {return toppings;}

void BasePizza::addTopping(ToppingGroup* component) {toppings.push_back(component);}
