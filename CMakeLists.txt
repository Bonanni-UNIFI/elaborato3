cmake_minimum_required(VERSION 3.26)
project(elaborato3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.14.0\\5.14.0\\mingw73_32\\")

find_package(Qt5 COMPONENTS REQUIRED Core Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(elaborato3 main.cpp
        Activity.cpp
        Activity.h
        Register.cpp
        Register.h
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui)

target_link_libraries(elaborato3 Qt5::Core Qt5::Widgets)