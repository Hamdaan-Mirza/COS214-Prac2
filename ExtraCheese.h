#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"

class ExtraCheese : public PizzaDecorator {
    public:
        ExtraCheese();
        ExtraCheese(Pizza* pizza);
        virtual ~ExtraCheese();
        virtual double getPrice() const;
        virtual std::string getName() const;
        virtual void printPizza() const;
};

#endif