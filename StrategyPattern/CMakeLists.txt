cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME StrategyPattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/Context/Duck.cpp
    src/${PROJECT_NAME}/Context/ConcreteContext/MallardDuck.cpp
    src/${PROJECT_NAME}/Context/ConcreteContext/RubberDuck.cpp
    src/${PROJECT_NAME}/Strategy/ConcreteStrategy/FlyNoWay.cpp
    src/${PROJECT_NAME}/Strategy/ConcreteStrategy/FlyWithWings.cpp
    src/${PROJECT_NAME}/Strategy/ConcreteStrategy/MuteQuack.cpp
    src/${PROJECT_NAME}/Strategy/ConcreteStrategy/Quack.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Context
    src/${PROJECT_NAME}/Context/ConcreteContext
    src/${PROJECT_NAME}/Strategy
    src/${PROJECT_NAME}/Strategy/ConcreteStrategy
)