#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza : public Pizza {
    public:
        BasePizza();
        virtual ~BasePizza();
        virtual double getPrice() const;
        virtual std::string getName() const;
        virtual void printPizza() const;
        std::vector<PizzaComponent*> getToppings() const;

    private:
        std::vector<PizzaComponent*> toppings;
};

#endif