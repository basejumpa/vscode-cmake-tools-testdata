add_library(some_unit)

target_sources(
    some_unit
    PRIVATE
        some_unit.cpp
        some_unit.hpp
)

target_include_directories(some_unit PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(
    test_some_unit
    some_unit_test.cpp
)
target_link_libraries(
    test_some_unit
    some_unit
    Catch2::Catch2WithMain
)

include(CTest)
include(Catch)
catch_discover_tests(test_some_unit)
