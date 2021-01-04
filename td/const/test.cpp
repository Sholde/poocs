#include <iostream>

struct test
{
  int a = 0;
  void print() const
  {
    std::cout << "a = " << a << std::endl;
  };
};

void func(test &t)
{
  t.a = 9;
  t.print();
}

void const_func(const test &t)
{
  t.print();
}

int main()
{
  test t;

  t.print();
  func(t);
  const_func(t);
  
  return 0;
}
