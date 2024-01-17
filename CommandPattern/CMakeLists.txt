cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME CommandPattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/Command/ConcreteCommand/LightOffCommand.cpp
    src/${PROJECT_NAME}/Command/ConcreteCommand/LightOnCommand.cpp
    src/${PROJECT_NAME}/Invoker/RemoteControl.cpp
    src/${PROJECT_NAME}/Receiver/Light.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Command
    src/${PROJECT_NAME}/Command/ConcreteCommand
    src/${PROJECT_NAME}/Invoker
    src/${PROJECT_NAME}/Receiver
)