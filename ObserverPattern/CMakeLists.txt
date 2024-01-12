cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME ObserverPattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/Observer/ConcreteObserver/CurrentConditionsDisplay.cpp
    src/${PROJECT_NAME}/Observer/ConcreteObserver/ThirdPartyDisplay.cpp
    src/${PROJECT_NAME}/Subject/WeatherData.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Observer
    src/${PROJECT_NAME}/Observer/ConcreteObserver
    src/${PROJECT_NAME}/Subject
)