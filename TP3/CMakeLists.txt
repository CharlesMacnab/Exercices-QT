cmake_minimum_required(VERSION 3.7)
project(QTTP3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets CONFIG REQUIRED)


add_executable(QTTP3 main.cpp IHM.cpp IHM.h IHM2.cpp IHM2.h IMH3.cpp IMH3.h)

target_link_libraries(QTTP3 Qt5::Widgets)