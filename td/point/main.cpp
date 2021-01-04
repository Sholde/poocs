#include "point.h"
#include "point2D.h"
#include "point3D.h"

void print(point& p)
{
  p.print();
}

int main()
{
  point p;
  print(p);
  
  point2D p2;
  print(p2);
  
  point3D p3;
  print(p3);

  return 0;
}
