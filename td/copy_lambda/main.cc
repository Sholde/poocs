#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
  std::vector<int> v = {1, 2, 3, 4};
  std::vector<int> f;
  f.reserve(v.size());
  std::vector<int> c;
  c.reserve(v.size());

  std::for_each(v.begin(), v.end(), [&f] (int i) {if (i % 2 == 0) f.push_back(i);});
  std::copy_if(v.begin(), v.end(), std::back_inserter(c), [] (auto i) {return (i % 2 == 0);});
  
  std::cout << "v :" << std::endl;
  for (auto val : v)
    std::cout << val << std::endl;

  std::cout << "f :" << std::endl;
  for (auto val : f)
    std::cout << val << std::endl;

  std::cout << "c :" << std::endl;
  for (auto val : c)
    std::cout << val << std::endl;
  
  return 0;
}
