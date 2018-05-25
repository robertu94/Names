A simple library to provide names of types without RTTI

usage:

```cpp
// in header.h
#include <names.hpp>

class my_class{};

namespace util::names{
decl_name(my_class)
}

// in main.c
#include <iostream>
#include "header.h"

int main(int argc, char *argv[])
{
	using namespace util::names;
	std::cout << name<my_class>::n << std::endl;
	return 0;
}
