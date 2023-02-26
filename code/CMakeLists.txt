cmake_minimum_required (VERSION 3.8)

project(Greetings CXX)

add_subdirectory(component)

find_package(spdlog CONFIG REQUIRED)
find_package(CLI11 CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} spdlog::spdlog CLI11::CLI11 Component)
