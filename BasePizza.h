#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"
#include "PizzaComponent.h"
#include "ToppingGroup.h"

class BasePizza : public Pizza {
    public:
        BasePizza();
        virtual ~BasePizza();
        virtual double getPrice() const override;
        virtual std::string getName() const override;
        virtual void printPizza() const override;
        std::vector<PizzaComponent*> getToppings() const;
        void addTopping(ToppingGroup* component);
    private:
        std::vector<PizzaComponent*> toppings;
};

#endif