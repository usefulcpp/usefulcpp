cmake_minimum_required(VERSION 3.0.0)
project(usefulcpp VERSION 0.1.0)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
set( CMAKE_CXX_FLAGS_RELEASE "-O3")
set( CMAKE_CXX_FLAGS_DEBUG "-g") 
set( CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(contrib)

