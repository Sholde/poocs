#include <iostream>

struct A
{
  A() {};
  A(const A &a) { std::cout << "A(const A &a)" << std::endl; }
  A(A &&a) { std::cout << "A(A &&a)" << std::endl; }
};

struct B
{
  B(const A &a) : m_a(a)
  {
    std::cout << "B(const A &a)" << std::endl;
  }

  B(A &&a) : m_a(std::move(a))
  {
    std::cout << "B(A &&a)" << std::endl;
  }

  A m_a;
};

struct C
{
  template<typename T>
  C(T &&a) : m_a(std::forward<T>(a))
  {
    std::cout << "C(T &&a)" << std::endl;
  }

  A m_a;
};

int main()
{
  A a{};
  B b(A{});
  B b2(a);

  C c(A{});
  C c2(a);
  return 0;
}
