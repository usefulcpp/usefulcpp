#include "hello.h"

#include <cassert>
#include <iostream>


int main(){
    assert(useful::say_hello("world") == "Hello, world");
    std::cout << useful::say_hello("world");
}