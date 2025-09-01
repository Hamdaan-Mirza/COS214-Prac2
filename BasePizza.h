#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza : public Pizza {
    public:
        BasePizza();
        virtual ~BasePizza();
        virtual double getPrice() const override;
        virtual std::string getName() const override;
        virtual void printPizza() const override;
        std::vector<PizzaComponent*> getToppings() const;

    private:
        std::vector<PizzaComponent*> toppings;
};

#endif