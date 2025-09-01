#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"

class Topping : public PizzaComponent {
public:
    Topping();
    Topping(const std::string& name, double price);
    double getPrice() const override;
    std::string getName() const override;

private:
    std::string name;
    double price;
};

#endif