#include <iostream>
#include "test.h"

int main()
{
  test t;
  std::cout << t.compute() << std::endl;

  child c;
  std::cout << c.compute() << std::endl;
  
  return 0;
}
