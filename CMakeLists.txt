cmake_minimum_required(VERSION 3.10)
project(mobile_robot_app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mobile_robot_app main.cpp mobile_robot.cpp)

