cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME DecoratorPattern_IF)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/Component/ConcreteComponent/DarkRost.cpp
    src/${PROJECT_NAME}/Component/ConcreteComponent/Espresso.cpp
    src/${PROJECT_NAME}/Decorator/BeverageDecorator.cpp
    src/${PROJECT_NAME}/Decorator/ConcreteDecorator/MilkDecorator.cpp
    src/${PROJECT_NAME}/Decorator/ConcreteDecorator/MochaDecorator.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Component
    src/${PROJECT_NAME}/Component/ConcreteComponent
    src/${PROJECT_NAME}/Decorator
    src/${PROJECT_NAME}/Decorator/ConcreteDecorator
)