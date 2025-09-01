#include <iostream>
#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"
#include "Pizza.h"
#include "BasePizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"
#include <Menus.h>


int main() {
    //
    std::cout <<"Testing Component" << std::endl;
    Topping* mushroom = new Topping("Mushroom", 12.0);
    Topping* peppers = new Topping("Green Peppers", 10.0);
    Topping* onions = new Topping("Onions", 8.0);
    ToppingGroup* vegetarian = new ToppingGroup("Vegetarian");
    vegetarian->addTopping(mushroom);
    vegetarian->addTopping(peppers);
    vegetarian->addTopping(onions);

    Topping* feta = new Topping("Feta", 18.0);
    Topping* olives = new Topping("Olives", 15.0);
    ToppingGroup* deluxe = new ToppingGroup("Vegetarian Deluxe");
    deluxe->addTopping(vegetarian);  
    deluxe->addTopping(feta);
    deluxe->addTopping(olives);

    std::cout << deluxe->getName() << std::endl;  
    std::cout << deluxe->getPrice() << std::endl; 
    delete deluxe;

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Decorator" << std::endl;
    Pizza* base = new BasePizza(); 
    Pizza* stuffed = new StuffedCrust(base);
    Pizza* cheesy = new ExtraCheese(stuffed);
    cheesy->printPizza(); 
    std::cout << "Price: " << cheesy->getPrice() << std::endl; 
    std::cout << "Name: " << cheesy->getName() << std::endl; 
    delete cheesy; // Cleans up all
    return 0;

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Observer" << std::endl;
    PizzaMenu* pizzaMenu;
    SpecialsMenu* specialsMenu;
}