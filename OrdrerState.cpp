#include "OrderState.h"

void Placed::handleOrder(Order *order)
{
    std::cout << "Order " << order->getNumber() << "have been placed and the preparation will start shortly." << std::endl;
    order->setState(new Preparing);
}

void Preparing::handleOrder(Order *order)
{
    std::cout << "Order " << order->getNumber() << " has been prepared and is currently being checked for quality." << std::endl;
    order->setState(new QualityCheck);
}

void QualityCheck::handleOrder(Order *order)
{
    if (order->getQuality())
    {
        std::cout << "Order " << order->getNumber() << " passed the quality check and the packing process started." << std::endl;
        order->setState(new Packing);
    }
    else
    {
         std::cout << "Order " << order->getNumber() << " failed test and has to be reprepared." << std::endl;
         order->setState(new Preparing);
    }
}

void Packing::handleOrder(Order *order)
{
    std::cout << "Order " << order->getNumber() << " packing is almost ready." << std::endl;
    order->setState(new Ready);
}

void Ready::handleOrder(Order *order)
{
    std::cout << "Order " << order->getNumber() << " is ready for collection." << std::endl;
}