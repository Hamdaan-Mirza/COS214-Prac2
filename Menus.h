#ifndef MENUS_H
#define MENUS_H

#include <vector>
#include <list>
#include "Observer.h"
#include "Pizza.h"

using namespace std;

class Menus{
public:
void addObserver(Observer* observer);
void removeObserver(Observer* observer);
void addPizza(Pizza pizza);
void removePizza(Pizza pizza);
virtual void notifyObservers(String message) = 0;

private:
vector<Observer*> observers;
list<Pizza*> pizzas;
};

class PizzaMenu : public Menus {
    void notifyObservers(String message);
}

class SpecialsMenu : public Menus {
    public:
    void notifyObservers(String message);
}

#endif