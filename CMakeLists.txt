cmake_minimum_required(VERSION 3.26)
project(elaborato3)

set(CMAKE_CXX_STANDARD 17)

# Add subdirectory for Google Test
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.14.0\\5.14.0\\mingw73_32\\")

find_package(Qt5 COMPONENTS Widgets Test REQUIRED )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(elaborato3 main.cpp
        Activity.cpp
        Activity.h
        Register.cpp
        Register.h
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui)

target_link_libraries(elaborato3 Qt5::Widgets)


# it enable the tests
enable_testing()

# Test for Activity
add_executable(tst_activity
        tests/tst_activity.cpp
        Activity.cpp
)
target_link_libraries(tst_activity gtest gtest_main Qt5::Widgets)
add_test(NAME tst_activity COMMAND tst_activity)

# Test for Register
add_executable(tst_register
        tests/tst_register.cpp
        Activity.cpp
        Register.cpp
)
target_link_libraries(tst_register gtest gtest_main Qt5::Widgets)
add_test(NAME tst_register COMMAND tst_register)

find_package(Qt5Test REQUIRED)
# Test per MainWindow
add_executable(tst_mainwindow
        tests/tst_mainwindow.cpp
        mainwindow.cpp
        Activity.cpp
        Register.cpp
)
target_link_libraries(tst_mainwindow Qt5::Widgets Qt5::Test)

add_test(NAME tst_mainwindow COMMAND tst_mainwindow)

# Specifica la directory delle intestazioni di Google Test
target_include_directories(tst_activity PRIVATE googletest/googletest/include)
target_include_directories(tst_register PRIVATE googletest/googletest/include)
target_include_directories(tst_mainwindow PRIVATE googletest/googletest/include)