#include "tuple.hh"

int main()
{
  Tuple<int, int, int> my_int_tuple{1, 2, 3};
  my_int_tuple.print();

  Tuple<int, double, int> my_double_tuple{1, 1.2, 3};
  my_double_tuple.print();

  return 0;
}
