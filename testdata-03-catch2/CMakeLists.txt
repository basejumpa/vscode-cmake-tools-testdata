cmake_minimum_required(VERSION 3.10)

project(SomeProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

enable_testing()

add_subdirectory(some_unit)

add_executable(
    app
    app.cpp
)

target_link_libraries(
    app
    some_unit
)
