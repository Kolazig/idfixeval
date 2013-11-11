cmake_minimum_required(VERSION 2.6)

# Project configuration
project(IDFixRemake)
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++11 -Wall -Wextra -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++11 -Wall -Wextra -Werror")

# Include libraries
include(FindBoost)
find_package(
    Boost
    1.54.0
    REQUIRED graph
    )
link_directories(${Boost_LIBRARY_DIRS})
include_directories(${Boost_INCLUDE_DIRS})

include_directories(include)

# Binary configuration
file(
    GLOB_RECURSE
    source_files
    src/*
    )

add_executable(
    idfix
    ${source_files}
    )

# Link configuration
target_link_libraries(
    idfix
    ${Boost_LIBRAIRIES}
    )
