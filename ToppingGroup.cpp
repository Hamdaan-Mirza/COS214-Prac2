#include "ToppingGroup.h"

ToppingGroup::ToppingGroup() : name(""), price(0.0) {}

ToppingGroup::ToppingGroup(const std::string& name) : 
name(name), price(0.0) {}

ToppingGroup::~ToppingGroup() {
    for(int i = 0; i < toppings.size(); ++i) delete toppings[i];
}

double ToppingGroup::getPrice() const {
    double _price = 0.0;
    for (int i = 0; i < toppings.size(); ++i) {
        _price += toppings[i]->getPrice();
    }
    return _price;
}

std::string ToppingGroup::getName() const {
    std::string name = "(";
    for (int i = 0; i < toppings.size(); ++i) {
        name += toppings[i]->getName() + ", ";
    }
    if (!name.empty()) {
        name.pop_back();  
        name.pop_back();  
        name += ")";
    }
    return name;
}

std::vector<PizzaComponent*> ToppingGroup::getToppings() const {return toppings;}

void ToppingGroup::addTopping(PizzaComponent* component) {
    toppings.push_back(component);
}

void ToppingGroup::setPrice(double price) {this->price = price;}
