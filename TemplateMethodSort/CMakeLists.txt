cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME TemplateMethodSort)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/${PROJECT_NAME}/main.cpp
    src/${PROJECT_NAME}/Client.cpp
    src/${PROJECT_NAME}/IntValue.cpp
    src/${PROJECT_NAME}/Duck.cpp
)

include_directories(
    src/${PROJECT_NAME}
)