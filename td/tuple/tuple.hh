#ifndef _tuple_h
#define _tuple_h

template <typename T, typename  U, typename V>
class Tuple {
public:
  T t = T{};
  U u = U{};
  V v = V{};
  
 public:
  void print() const;
};

#include "tuple.cpp"

#endif
