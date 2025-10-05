cmake_minimum_required(VERSION 3.10)

project(TestProject_Yandex)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    src/
)

file(GLOB_RECURSE PROJECT_SOURCES "src/*.cpp" "src/*/*.cpp" "src/*.h" "src/*/*.h")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})