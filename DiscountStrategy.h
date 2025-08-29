#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

class DiscountStrategy
{
public:
    virtual double applyDiscount(double total) = 0;
};

class RegularPrice : public DiscountStrategy{
public:
    virtual double applyDiscount(double total);
};

class BulkDiscount : public DiscountStrategy{
public:
    virtual double applyDiscount(double total);
};

class FamilyDiscount : public DiscountStrategy{
public:
    virtual double applyDiscount(double total);
};

#endif