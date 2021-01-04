#include <vector>
#include <algorithm>
#include <iostream>

struct functor_sup_2
{
  bool operator() (int &val)
  {
    return (val > 2) ? true : false;
  }
};


int main()
{
  std::vector<int> v{1, 2, 3 ,4};

  auto find = std::find_if(v.begin(), v.end(), functor_sup_2{});

  if (find != v.end())
    std::cout << "first value > 2 : " << *find << std::endl;
  
  return 0;
}
