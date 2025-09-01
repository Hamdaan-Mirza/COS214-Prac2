#ifndef STUFFEDCRUST_H
#define STUFFEDCRUST_H

#include "PizzaDecorator.h"

class StuffedCrust : public PizzaDecorator {
public:
    StuffedCrust();
    StuffedCrust(Pizza* pizza);
    virtual ~StuffedCrust();
    virtual double getPrice() const override;
    virtual std::string getName() const override;
    //virtual void printPizza() const override;
};

#endif 