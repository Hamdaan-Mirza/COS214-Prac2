#include <iostream>
#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"
#include "Pizza.h"
#include "BasePizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"

int main() {
    std::cout << "Testing Composite and Decorator Integration" << std::endl;
    Topping* mushroom = new Topping("Mushroom", 12.0);
    Topping* peppers = new Topping("Green Peppers", 10.0);
    Topping* onions = new Topping("Onions", 8.0);


    ToppingGroup* vegetarian = new ToppingGroup("Vegetarian");
    vegetarian->addTopping(mushroom);
    vegetarian->addTopping(peppers);
    vegetarian->addTopping(onions);

    // Create nested group
    Topping* feta = new Topping("Feta", 18.0);
    Topping* olives = new Topping("Olives", 15.0);
    ToppingGroup* deluxe = new ToppingGroup("Vegetarian Deluxe");
    deluxe->addTopping(vegetarian);  // Nesti
    deluxe->addTopping(feta);
    deluxe->addTopping(olives);

    std::cout << "Composite Topping Group Name: " << deluxe->getName() << std::endl;
    std::cout << "Composite Topping Group Price: " << deluxe->getPrice() << std::endl;


    BasePizza* base = new BasePizza();
    base->addTopping(deluxe);

    Pizza* stuffed = new StuffedCrust(base);
    Pizza* cheesy = new ExtraCheese(stuffed);

    std::cout << "Decorated Pizza with Composite Toppings:" << std::endl;
    cheesy->printPizza();
    std::cout << "Full Price (via decorator): " << cheesy->getPrice() << std::endl;
    std::cout << "Full Name (via decorator): " << cheesy->getName() << std::endl;

    delete cheesy;

    return 0;
}