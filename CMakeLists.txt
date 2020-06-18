cmake_minimum_required(VERSION 3.14)

project(main)

set(BOOST_ROOT $ENV{BOOST_ROOT_1_69_0})
find_package(Boost 1.50 OPTIONAL_COMPONENTS program_options thread filesystem date_time REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(main main.cpp)
add_executable(test test.cpp)
target_link_directories(main PRIVATE ${Boost_LIBRARY_DIRS})
target_link_directories(test PRIVATE ${Boost_LIBRARY_DIRS})
