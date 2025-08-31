#include "Topping.h"

Topping::Topping() : name(""), price(0.0) {}

Topping::Topping(const std::string& name, double price) : 
name(name), price(price) {}

double Topping::getPrice() const {return price;}

std::string Topping::getName() const {return name;}
