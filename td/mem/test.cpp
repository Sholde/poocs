#include <iostream>

class A
{
private:
  int *ptr = nullptr;
public:
  // Constructeur
  A() = default;
  A(int n) : ptr(new int(n)) {};

  // Destructeur
  ~A() {delete this->ptr;};

  // function
  void set(int n)
  {
    if (this->ptr)
      *(this->ptr) = n;
    else
      this->ptr = new int(n);
  };

  void print() const
  {
    if (this->ptr)
      {
	std::cout << "ptr = " << this->ptr << std::endl;
	std::cout << "*ptr = " << *(this->ptr) << std::endl;
      }
    else
      std::cout << "ptr = nullptr" << std::endl;
  };
};

void print_object(const A &a)
{
  a.print();
}

void modify_object(A &a, int n)
{
  a.set(n);
}

int main()
{
  A a;
  a.print();
  a.set(7);
  a.print();

  modify_object(a, 888);
  print_object(a);
  
  return 0;
}
