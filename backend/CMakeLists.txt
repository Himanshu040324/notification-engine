cmake_minimum_required(VERSION 3.20)

project(NotificationEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(notification_engine
    app/main.cpp
    src/notification/SimpleNotification.cpp
)

target_include_directories(notification_engine PRIVATE
    include/notification
)