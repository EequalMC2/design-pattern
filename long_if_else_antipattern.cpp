#include <any>
#include <iostream>
#include <map>
#include <string>

typedef  void(*function_t)();

void foo1() { std::cout << "foo1" << std::endl; }
void foo2() { std::cout << "foo2" << std::endl; }
void foo3() { std::cout << "foo3" << std::endl; }

std::map<std::string, function_t> functionMap = { { "foo1", foo1 }, { "foo2", foo2 }, { "foo3", foo3 } };

function_t getFunction(std::string name) { 
    return functionMap[name];
}

int main()
{
    auto foo = getFunction("foo2");
    foo();
}
