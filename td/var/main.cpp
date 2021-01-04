#include <iostream>

int main() {

  int one = 1;
  {
    int *two = new int{7};
    std::cout << *two << std::endl;
    delete two;
  }
  std::cout << one << std::endl;

  int *ptr = &one;
  std::cout << *ptr << std::endl;
  std::cout << ptr << std::endl;

  int &ref = one;
  std::cout << ref << std::endl;
  std::cout << &ref << std::endl;

  int const *const a = new int(5);
  std::cout << *a << std::endl;
  delete a;
  
  return 0;
}
