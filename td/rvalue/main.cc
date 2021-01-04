#include <iostream>
#include <vector>

struct rvalue
{
  std::vector<int> v;

  rvalue(const std::vector<int> &v)
  {
    std::cout << "constructor vector ref" << std::endl;
    this->v = v;
  }

  rvalue(const rvalue &r)
  {
    std::cout << "constructor ref" << std::endl;
    this->v = std::move(r.v);
  }
  
  rvalue(rvalue &&r)
  {
    std::cout << "constructor rvalue" << std::endl;
    this->v = std::move(r.v);
  }
  
  rvalue &operator=(rvalue &&r)
  {
    std::cout << "move" << std::endl;
    this->v = std::move(r.v);
    return *this;
  }

  void print() const
  {
    std::cout << "vector :" << std::endl;
    for (int val : this->v)
      {
	std::cout << "val" << val << std::endl;
      }
  }
};

int main()
{
  rvalue a{ std::vector<int>{1, 2, 3} };
  a.print();
  
  rvalue b{a};
  b.print();
  
  rvalue c = a;
  c.print();
  
  rvalue d = rvalue{std::move(c)};
  d.print();
  
  return 0;
}
