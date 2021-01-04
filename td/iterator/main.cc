#include <array>
#include <set>
#include <iostream>

struct container
{
  std::set<int> s;

  std::set<int>::iterator begin() {return s.begin();}
  std::set<int>::iterator end() {return s.end();}
};

int main()
{
  std::array<int, 4> a = {5, 7, 2, 1};
  for (auto &i : a)
    {
      std::cout << ++i << std::endl;
    }

  std::set<std::string> s = { "allo", "call" };
  for (auto i : s)
    {
      std::cout << i << std::endl;
    }

  container c{ {1, 2} };

  for (auto i : c)
    {
      std::cout << i << std::endl;
    }
  
  return 0;
}
