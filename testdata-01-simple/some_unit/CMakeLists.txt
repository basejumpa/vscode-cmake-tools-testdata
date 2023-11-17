add_library(some_unit)

target_sources(
    some_unit
    PRIVATE
        some_unit.c
        some_unit.h
)

target_include_directories(some_unit PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(
    test_some_unit
    some_unit_test.c
)

target_link_libraries(
    test_some_unit
    some_unit
)

add_test(
    NAME test_some_unit_one
    COMMAND test_some_unit
    CONFIGURATIONS Debug
)

add_test(
    NAME test_some_unit_second
    COMMAND test_some_unit
    CONFIGURATIONS Debug
)

add_test(
    NAME test_some_unit_third
    COMMAND test_some_unit
    CONFIGURATIONS Debug
)

add_test(
    NAME test_some_unit_second.test__some_function
    COMMAND test_some_unit test__some_function
    CONFIGURATIONS Debug
)

add_test(
    NAME test_some_unit_second.test__some_other_function
    COMMAND test_some_unit test__some_other_function
    CONFIGURATIONS Debug
)

add_test(
    NAME test_some_unit_second.both
    COMMAND test_some_unit test__some_function test__some_other_function
    CONFIGURATIONS Debug
)