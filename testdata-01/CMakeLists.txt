cmake_minimum_required(VERSION 3.10)

project(SomeProject)

add_executable(
    app 
    app.c
)

enable_testing()

add_subdirectory(some_unit)

target_link_libraries(
    app
    some_unit
)

add_executable(
    app2 
    app.c
)

target_link_libraries(
    app2
    some_unit
)