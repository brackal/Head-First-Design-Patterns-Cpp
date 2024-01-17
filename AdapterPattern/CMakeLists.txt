cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME AdapterPattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/TestClient.cpp
    src/${PROJECT_NAME}/Target/MallardDuck.cpp
    src/${PROJECT_NAME}/Adapter/TurkeyAdapter.cpp
    src/${PROJECT_NAME}/Adaptee/WildTurkey.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Target
    src/${PROJECT_NAME}/Adapter
    src/${PROJECT_NAME}/Adaptee
)