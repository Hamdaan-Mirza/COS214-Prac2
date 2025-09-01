#include "DiscountStrategy.h"

double RegularPrice::applyDiscount(double total){
    std::cout << "No discount for this order" << std::endl;
    return total;
}

double BulkDiscount::applyDiscount(double total){
    std::cout << "Bulk discount is applied" << std::endl;
    double discount = 0.1 * total;
    return (total - discount);
}

double FamilyDiscount::applyDiscount(double total){
    std::cout << "Family discount is applied" << std::endl;
    double discount = 0.15 * total;
    return (total - discount);
}