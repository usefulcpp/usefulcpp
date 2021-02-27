#include "hello.h"

namespace useful{

std::string say_hello(std::string const& name)
{
    return "Hello, " + name;
}

}