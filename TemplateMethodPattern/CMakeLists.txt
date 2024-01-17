cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME TemplateMethodPattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/TestClient.cpp
    src/${PROJECT_NAME}/AbstractClass/CaffeineBeverage.cpp
    src/${PROJECT_NAME}/ConcreteClass/Coffee.cpp
    src/${PROJECT_NAME}/ConcreteClass/Tea.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/AbstractClass
    src/${PROJECT_NAME}/ConcreteClass
)