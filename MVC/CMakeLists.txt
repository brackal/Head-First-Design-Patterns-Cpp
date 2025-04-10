cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME MVC)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Client.cpp
    src/Model/BeatModel.cpp
    #src/View/View.cpp
    src/View/ConcreteView/DJView.cpp
    #src/View/ConcreteView/TableView.cpp
    #src/Controller/Controller.cpp
    src/Controller/ConcreteController/BeatController.cpp
)

include_directories(
    src/
    src/Model/
    src/View/
    src/Controller/
    src/View/ConcreteView/
    src/Controller/ConcreteController/
)