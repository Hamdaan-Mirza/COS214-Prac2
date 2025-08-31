#include "ToppingGroup.h"

ToppingGroup::ToppingGroup() : name(""), price(0.0) {}

ToppingGroup::ToppingGroup(const std::string& name, double price) : 
name(name), price(price) {}

ToppingGroup::~ToppingGroup() {
    for (int i = 0; i < toppings.size(); ++i) {
        delete toppings[i];
    }
}

double ToppingGroup::getPrice() const {return price;}

std::string ToppingGroup::getName() const {return name;}

std::vector<PizzaComponent*> ToppingGroup::getToppings() const {return toppings;}

void ToppingGroup::addTopping(PizzaComponent* component) {
    toppings.push_back(component);
}


