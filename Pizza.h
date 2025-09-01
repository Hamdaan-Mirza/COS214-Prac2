#ifndef PIZZA_H
#define PIZZA_H

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

class Pizza {
    public:
        Pizza();
        virtual ~Pizza();
        virtual double getPrice() const = 0;
        virtual std::string getName() const = 0;
        virtual void printPizza() const;
};

#endif