#include <iostream>

class test
{
private:
  int *ptr = nullptr;

public:
  // Constructor
  test() = default;
  test(int n) : ptr(new int(n)) {};
  test(const test &t)
  {
    int val = 0;
    if (t.ptr)
      val = *(t.ptr);
    this->ptr = new int(val);
  };

  // Destructor
  ~test() {delete this->ptr;};

  // operator
  test &operator=(const test &t)
  {
    int val = 0;
    if (t.ptr)
      val = *(t.ptr);
    if (this->ptr)
      *(this->ptr) = val;
    else
      {
	this->ptr = new int(val);
      }
    return *this;
  };

  // print
  void print()
  {
    if (this->ptr) std::cout << *(this->ptr) << std::endl;
  };
};

int main()
{
  test t1;
  t1.print();
  
  test t2(66);
  t2.print();

  t1 = t2;
  t1.print();
  
  return 0;
}
