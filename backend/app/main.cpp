#include <iostream>

#include "notification/SimpleNotification.h"

int main()
{
    SimpleNotification simpleNotification(
        "Your order has been shipped."
    );

    Notification* notification = &simpleNotification;

    std::cout << notification->getContent() << std::endl;

    return 0;
}