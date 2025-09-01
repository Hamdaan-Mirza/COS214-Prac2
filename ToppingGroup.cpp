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
    std::string comp = "";//string to output components
    for (size_t i = 0; i < toppings.size(); ++i) {
        if (!comp.empty()) {
            comp += ", ";
        }
        comp += toppings[i]->getName();
    }
    std::string result = name;
    if (!comp.empty()) {
        if (!result.empty()) result += " ";
        result += "(" + comp + ")";//complete string with name infront
    }

    if (result.empty()) return "";
    else return result;
}

std::vector<PizzaComponent*> ToppingGroup::getToppings() const {return toppings;}

void ToppingGroup::addTopping(PizzaComponent* component) {
    toppings.push_back(component);
}
