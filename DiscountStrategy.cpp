#include "DiscountStrategy.h"

double RegularPrice::applyDiscount(double total){
    cout << "No discount for this order" << endl;
    return total;
}

double BulkDiscount::applyDiscount(double total){
    cout << "Bulk discount is applied" << endl;
    double discount = 0.1 * total;
    return (total - discount);
}

double FamilyDiscount::applyDiscount(double total){
    cout << "Family discount is applied" << endl;
    double discount = 0.15 * total;
    return (total - discount);
}