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
    //
    std::cout <<"Testing Component" << std::endl;
    ToppingGroup* tg = new ToppingGroup("Vegetables");
    tg->addTopping(new Topping("Tomato", 2.00));
    tg->addTopping(new Topping("Green Pepper", 1.00));
    tg->addTopping(new Topping("Onion", 2.50));
    std::cout <<"Name: " << tg->getName() << std::endl;
    std::cout <<"Price: " << tg->getPrice() << std::endl;
    delete tg;

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Decorator" << std::endl;
    BasePizza* pizza = new BasePizza();
    Pizza* cheese = new ExtraCheese(pizza);
    Pizza* stuffedCheese = new StuffedCrust(cheese);
    std::cout << "Name: " << stuffedCheese->getName() << std::endl;
    std::cout << "Price: " << stuffedCheese->getPrice() << std::endl;
    std::cout << "Details:"; cheese->printPizza(); std::cout << std::endl;
    return 0;
}