#include "SimpleNotification.h"

SimpleNotification::SimpleNotification(const std::string &content)
    : content(content)
{
}

std::string SimpleNotification::getContent() const
{
    return content;
}