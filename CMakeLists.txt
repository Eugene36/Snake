#sets up the minimum version of cmake
cmake_minimum_required(VERSION 3.15) # personally I'd set this version as low as required; you don't have to require the cutting edge version

set(PROJECT_NAME "SnakeGame")
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "${CMAKE_CURRENT_LIST_DIR}/SFML/lib/cmake/SFML")
file(GLOB DLLS "${CMAKE_CURRENT_LIST_DIR}/SFML/bin/*.dll")

file(COPY ${DLLS} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

set(SOURCE_FILES src/Main.cpp)

add_executable (${PROJECT_NAME} ${SOURCE_FILES})

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(${PROJECT_NAME} sfml-audio sfml-graphics sfml-window sfml-system)




