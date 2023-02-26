cmake_minimum_required (VERSION 3.8)

project(Component CXX)

find_package(spdlog CONFIG REQUIRED)

set(SOURCES impl/greeter.cpp
            inc/greeter.h)

add_library(${PROJECT_NAME} SHARED ${SOURCES})
target_link_libraries(${PROJECT_NAME} spdlog::spdlog)
target_include_directories(${PROJECT_NAME} PUBLIC inc)