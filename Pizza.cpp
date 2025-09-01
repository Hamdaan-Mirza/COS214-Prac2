#include "Pizza.h"

Pizza::Pizza() {}

Pizza::~Pizza() {}

void Pizza::printPizza() const {
    std::cout << "Pizza Name: " << getName() << std::endl;
    std::cout << "Pizza Price: " << getPrice() << std::endl;
}
