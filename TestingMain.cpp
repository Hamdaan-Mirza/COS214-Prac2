#include <iostream>
#include "PizzaComponent.h"
#include "Topping.h"
#include "ToppingGroup.h"
#include "Pizza.h"
#include "BasePizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"
#include "Menus.h"
#include "Order.h"

int main()
{
    //
    std::cout << "Testing Component" << std::endl;
    Topping *mushroom = new Topping("Mushroom", 12.0);
    Topping *peppers = new Topping("Green Peppers", 10.0);
    Topping *onions = new Topping("Onions", 8.0);
    ToppingGroup *vegetarian = new ToppingGroup("Vegetarian");
    vegetarian->addTopping(mushroom);
    vegetarian->addTopping(peppers);
    vegetarian->addTopping(onions);

    Topping *feta = new Topping("Feta", 18.0);
    Topping *olives = new Topping("Olives", 15.0);
    ToppingGroup *deluxe = new ToppingGroup("Vegetarian Deluxe");
    deluxe->addTopping(vegetarian);
    deluxe->addTopping(feta);
    deluxe->addTopping(olives);

    std::cout << deluxe->getName() << std::endl;
    std::cout << deluxe->getPrice() << std::endl;

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Decorator" << std::endl;
    Pizza *base = new BasePizza();
    Pizza *stuffed = new StuffedCrust(base);
    Pizza *cheesy = new ExtraCheese(stuffed);
    cheesy->printPizza();
    std::cout << "Price: " << cheesy->getPrice() << std::endl;
    std::cout << "Name: " << cheesy->getName() << std::endl;

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Observer" << std::endl;
    PizzaMenu *pizzaMenu = new PizzaMenu();
    SpecialsMenu *specialsMenu = new SpecialsMenu();
    Customer *customer = new Customer(pizzaMenu, specialsMenu);
    Website *website = new Website(pizzaMenu, specialsMenu);
    pizzaMenu->addObserver(customer);
    pizzaMenu->addObserver(website);
    specialsMenu->addObserver(customer);
    specialsMenu->addObserver(website);
    pizzaMenu->addPizza(cheesy);
    specialsMenu->addSpecial("Pepperoni pizzas are 10`%` off on Tuesday");
    pizzaMenu->removePizza(cheesy);
    pizzaMenu->removePizza(cheesy);
    pizzaMenu->removeObserver(customer);
    specialsMenu->removeObserver(website);
    specialsMenu->removeObserver(website);

    std::cout << "======================================" << std::endl;
    std::cout << "Testing Strategy" << std::endl;
    RegularPrice *regular = new RegularPrice();
    BulkDiscount *bulk = new BulkDiscount();
    FamilyDiscount *family = new FamilyDiscount();
    Order *order1 = new Order(regular, 89.99, 1);
    Order *order2 = new Order(bulk, 170.50, 2);
    Order *order3 = new Order(family, 300.00, 3);
    order1->applyDiscount(89.99);
    order2->applyDiscount(170.55);
    order3->applyDiscount(300.00);
    std::cout << "Orders total prices after discounts: " << std::endl;
    order1->getTotalPrice();
    order2->getTotalPrice();
    order3->getTotalPrice();
    std::cout << "======================================" << std::endl;
    std::cout << "Testing State" << std::endl;
    order1->handleState();
    order2->handleState();
    order3->handleState();

    std::cout << "======================================" << std::endl;
    std::cout << "Memory Management" << std::endl;
    delete deluxe;
    delete cheesy;
    delete pizzaMenu;
    delete specialsMenu;
    delete customer;
    delete website;
    return 0;
}