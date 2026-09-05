#ifndef SIMPLE_NOTIFICATION_H
#define SIMPLE_NOTIFICATION_H

#include "Notification.h"

class SimpleNotification : public Notification
{
private:
    std::string content;

public:
    SimpleNotification(const std::string& content);

    std::string getContent() const override;
};

#endif