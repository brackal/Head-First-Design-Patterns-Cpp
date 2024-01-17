cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME FacadePattern)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/TestClient.cpp
    src/${PROJECT_NAME}/Facade/HomeTheaterFacade.cpp
    src/${PROJECT_NAME}/Subsystem/Amplifier.cpp
    src/${PROJECT_NAME}/Subsystem/Player.cpp
    src/${PROJECT_NAME}/Subsystem/PopcornPopper.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Facade
    src/${PROJECT_NAME}/Subsystem
)