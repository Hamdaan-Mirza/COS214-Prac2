#ifndef PIZZA_DECORATOR_H
#define PIZZA_DECORATOR_H

#include "Pizza.h"

class PizzaDecorator : public Pizza {
    public:
        PizzaDecorator();
        PizzaDecorator(Pizza* pizza);
        virtual ~PizzaDecorator();
        virtual double getPrice() const override;
        virtual std::string getName() const override;
        //virtual void printPizza() const;
    protected:
        Pizza* pizza;
};

#endif