#include "Observer.h"

void Customer::update(std::string message){
    std::cout << "Dear Customer: " << message << std::endl;
    pizzas = pizzaMenu->getPizzas();
    specials = specialsMenu->getSpecials();
}

void Website::update(std::string message){ 
    std::cout << "Announcement: " << message << std::endl;
    pizzas = pizzaMenu->getPizzas();
    specials = specialsMenu->getSpecials();
}