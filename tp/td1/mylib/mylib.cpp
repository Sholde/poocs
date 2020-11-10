#include <iostream>

#include "mylib.h"

void MyLib::MyClass::print()
{
  std::cout << "MyLib::MyClass::print()" << std::endl;
}

int MyLib::MyClass::plus(int a, int b)
{
  return a + b;
}
