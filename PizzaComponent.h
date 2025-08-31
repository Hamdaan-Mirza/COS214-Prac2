#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <list>

class PizzaComponent {
public:
    virtual ~PizzaComponent() {}
    virtual double getPrice() const = 0;
    virtual std::string getName() const = 0;
};

#endif 