#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"
#include <vector>

class ToppingGroup : public PizzaComponent {
public:
    ToppingGroup();
    ~ToppingGroup();
    ToppingGroup(const std::string& name, double price);
    double getPrice() const override;
    std::string getName() const override;
    std::vector<PizzaComponent*> getToppings() const;
    void addTopping(PizzaComponent* component);
private:
    std::vector<PizzaComponent*> toppings;
    std::string name;
    double price;
};

#endif