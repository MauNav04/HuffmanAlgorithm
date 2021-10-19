cmake_minimum_required(VERSION 3.20)
project(HuffmanAlgUI)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_PREFIX_PATH "Z:/devTools/Qt/6.2.0/mingw81_64")

include_directories(.)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(HuffmanAlgUI
        encoder.h
        main.cpp
        mainwindow.cpp
        mainwindow.h)

target_link_libraries(${PROJECT_NAME} Qt6:Widgets)