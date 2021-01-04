#include <iostream>

class Test
{
private:
  int i = 0;
  
public:
  // Constructor
  Test(int i) { this->i = i; };

  // Overloading << operator
  // friend because the variable i is private
  friend std::ostream& operator<<(std::ostream& o, const Test &t)
  {
    return o << "i = " << t.i;
  };
};


// Main function
int main()
{
  Test t{66};
  std::cout << t << std::endl;
  return 0;
}
