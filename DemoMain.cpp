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
#include "OrderState.h"
#include "DiscountStrategy.h"
#include "Observer.h"

int main() {
    std::cout << "Composite and Decorator" << std::endl;
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

    BasePizza* base = new BasePizza();
    base->addTopping(deluxe);

    Pizza* decorated = new ExtraCheese(new StuffedCrust(base));
    decorated->printPizza();
    std::cout << "===============================================================";
    std::cout << "\nStrategy" << std::endl;
    RegularPrice* regular = new RegularPrice();
    BulkDiscount* bulk = new BulkDiscount();
    FamilyDiscount* family = new FamilyDiscount();

    Order* order1 = new Order(regular, decorated->getPrice(), 1);
    Order* order2 = new Order(bulk, decorated->getPrice() * 6, 2);   // bulk discount
    Order* order3 = new Order(family, decorated->getPrice() * 3, 3); // family discount

    std::cout << "Regular Price: ";
    order1->getTotalPrice();
    std::cout << "Bulk Discount: ";
    order2->getTotalPrice();
    std::cout << "Family Discount: ";
    order3->getTotalPrice();
    std::cout << "============================================================";
    std::cout << "\nObserver" << std::endl;
    PizzaMenu* pizzaMenu = new PizzaMenu();
    SpecialsMenu* specialsMenu = new SpecialsMenu();

    Customer* customer = new Customer(pizzaMenu, specialsMenu);
    Website* website = new Website(pizzaMenu, specialsMenu);

    pizzaMenu->addObserver(customer);
    pizzaMenu->addObserver(website);
    specialsMenu->addObserver(customer);
    specialsMenu->addObserver(website);

    pizzaMenu->addPizza(decorated);
    specialsMenu->addSpecial("Pepperoni pizzas are 10% off on Tuesday!");
    pizzaMenu->removePizza(decorated);
    std::cout << "====================================================";
    std::cout << "\nState" << std::endl;
    std::cout << "Order 1 state transitions:" << std::endl;
    order1->handleState();
    order1->handleState();
    order1->handleState();
    order1->handleState();

    std::cout << "\nOrder 2 state transitions:" << std::endl;
    order2->handleState();
    order2->handleState();
    order2->handleState();
    order2->handleState();

    delete decorated;   
    delete deluxe;
    delete regular;
    delete bulk;
    delete family;
    delete order1;
    delete order2;
    delete order3;
    delete pizzaMenu;
    delete specialsMenu;
    delete customer;
    delete website;

    return 0;
}
