#include "ToppingGroup.h"

ToppingGroup::ToppingGroup() : name(""), price(0.0) {}

ToppingGroup::ToppingGroup(const std::string& name, double price) : 
name(name), price(price) {}

double ToppingGroup::getPrice() const {return price;}

std::string ToppingGroup::getName() const {return name;}
