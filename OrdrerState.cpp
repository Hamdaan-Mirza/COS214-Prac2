#include "OrderState.h"


void PLaced::handleOrder(Order *order){
    std::cout << "Order number have been placed and the preparation will start shortly." << std::endl;
}

void Preparing::handleOrder(Order *order){
    std::cout << "Order have been placed and the preparation will start shortly." << std::endl;
}

void QualityCheck::handleOrder(Order *order){
    std::cout << "Order have been placed and the preparation will start shortly." << std::endl;
}

void Packing::handleOrder(Order *order){
    std::cout << "Order have been placed and the preparation will start shortly." << std::endl;
}

void Ready::handleOrder(Order *order){
    std::cout << "Order have been placed and the preparation will start shortly." << std::endl;
}