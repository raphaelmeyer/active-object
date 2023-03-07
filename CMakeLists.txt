cmake_minimum_required(VERSION 3.25)

project(ActiveObject)

include(CTest)

add_library(active-object INTERFACE)
target_compile_options(active-object INTERFACE
    "-Wall"
    "-Wextra"
    "-Werror"
)
target_compile_features(active-object INTERFACE cxx_std_20)
target_include_directories(active-object INTERFACE src)

add_executable(example)
target_sources(example
    PRIVATE
        example/main.cc
        example/counter.cc
)
target_link_libraries(example PRIVATE active-object)

add_executable(tests)
target_sources(tests PRIVATE test/tests.cc)
target_link_libraries(tests PRIVATE doctest::doctest)
add_test(NAME ao-tests COMMAND tests)

add_subdirectory(vendor)
