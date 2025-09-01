#ifndef MENUS_H
#define MENUS_H

#include <vector>
#include <list>
#include "Observer.h"
#include "Pizza.h"

class Menus
{
public:
    void addObserver(Observer *observer);
    void removeObserver(Observer *observer);
    virtual void notifyObservers(std::string message) = 0;

protected:
    std::vector<Observer *> observers;
};

class PizzaMenu : public Menus
{
public:
    void notifyObservers(std::string message);
    void addPizza(Pizza *pizza);
    void removePizza(Pizza *pizza);
    std::vector<Pizza *> getPizzas();

private:
    std::vector<Pizza *> pizzas;
};

class SpecialsMenu : public Menus
{
public:
    void notifyObservers(std::string message);
    void addSpecial(std::string special);
    std::vector<std::string> getSpecials();
private:
    std::vector<std::string> specials;
};

#endif