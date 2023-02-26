cmake_minimum_required (VERSION 3.8)

project(GreetingsTest CXX)

find_package(GTest CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

set(SOURCES component_test.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} spdlog::spdlog GTest::gtest_main Component)

enable_testing()
add_test(NAME RUN_TESTS 
         WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
         COMMAND ${PROJECT_NAME})

