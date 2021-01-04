#ifndef _tuple_c
#define _tuple_c

#include <iostream>

template <typename T, typename U, typename V>
void Tuple<T, U, V>::print() const
{
  std::cout << "here" << std::endl;
}

template <>
void Tuple<int, int, int>::print() const
{
  std::cout << "Made of int" << std::endl;
}


#endif
