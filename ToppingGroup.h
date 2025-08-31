#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"

class ToppingGroup : public PizzaComponent {
public:
    ToppingGroup();
    ToppingGroup(const std::string& name, double price);
    double getPrice() const override;
    std::string getName() const override;

private:
    std::string name;
    double price;
};

#endif