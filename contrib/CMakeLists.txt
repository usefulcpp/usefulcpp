
add_library(hello SHARED hello.cpp)
add_executable(testhello hello.tst.cpp)
target_link_libraries(testhello hello)