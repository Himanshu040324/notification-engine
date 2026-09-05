#include <iostream>

#include "SimpleNotification.h"

int main()
{
    SimpleNotification notification("Your order has been shipped.");

    std::cout << notification.getContent() << std::endl;

    return 0;
}