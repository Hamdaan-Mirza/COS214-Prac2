#include "Observer.h"

Observer::Observer(PizzaMenu* menu1, SpecialsMenu* menu2){
    pizzaMenu = menu1;
    specialsMenu = menu2;
}

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