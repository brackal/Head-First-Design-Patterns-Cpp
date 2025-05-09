cmake_minimum_required(VERSION 3.16)

project(MVC_App VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
)

include_directories(
    src/
    src/Model/
    src/View/
    src/Controller/
    src/View/ConcreteView/
    src/Controller/ConcreteController/
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(MVC_App
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        src/View/ConcreteView/DJView.cpp

        src/View/ConcreteView/DJView.ui
        src/Model/I_BeatModel.h
        src/Model/BeatModel.h
        src/Model/ICB_BeatObserver.h
        src/Model/ICB_BpmObserver.h
        src/Model/BeatModel.cpp
        src/Controller/I_Controller.h
        src/Controller/ConcreteController/BeatController.h
        src/Controller/ConcreteController/BeatController.cpp
        src/Model/BeatModelWorker.h
        src/View/ConcreteView/DJView.h
        Client.cpp
        Client.h
        src/Model/BeatModelWorker.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET MVC_App APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(MVC_App SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(MVC_App
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(MVC_App PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.MVC_App)
endif()
set_target_properties(MVC_App PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS MVC_App
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(MVC_App)
endif()
