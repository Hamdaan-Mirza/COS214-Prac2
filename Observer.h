#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
#include "Menus.h"

class PizzaMenu;
class SpecialsMenu;

class Observer
{
public:
    Observer(PizzaMenu *menu1, SpecialsMenu *menu2);
    virtual void update(std::string message) = 0;

protected:
    std::vector<Pizza *> pizzas;
    std::vector<std::string> specials;
    PizzaMenu *pizzaMenu;
    SpecialsMenu *specialsMenu;
};

class Customer : public Observer
{
public:
    Customer(PizzaMenu* menu1, SpecialsMenu* menu2);
    virtual void update(std::string message);
};

class Website : public Observer
{
public:
    Website(PizzaMenu* menu1, SpecialsMenu *menu2);
    virtual void update(std::string message);
};

#endif