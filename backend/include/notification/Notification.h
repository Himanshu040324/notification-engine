#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>

class Notification
{
public:
    virtual std::string getContent() const = 0;

    virtual ~Notification() = default;
};

#endif