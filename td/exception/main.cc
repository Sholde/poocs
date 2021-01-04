#include <iostream>
#include <exception>

void display_int(int n)
{
  if (n < 0)
    throw std::runtime_error{"Exception : negative number on display_int function"};
  else
    {
      for(int i = 0; i < n; ++i)
	{
	  std::cout << i << std::endl;
	}
    }
}

int main()
{
  try
    {
      display_int(-6);
    }
  catch (std::runtime_error &e)
    {
      std::cout << e.what() << std::endl;
    }
  
  return 0;
}
