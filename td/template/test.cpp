#include <iostream>

template <typename T>
void func(T &t)
{
  ++t;
  std::cout << t << std::endl;
}

template <>
void func(bool &b)
{
  std::cout << "bool" << std::endl;
}

int main()
{
  int i = 5;
  func(i);

  double d = 0.78;
  func(d);

  bool b = true;
  func(b);
  
  return 0;
}
