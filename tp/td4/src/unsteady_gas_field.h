#ifndef _unsteady_gas_field_h
#define _unsteady_gas_field_h

#include <cmath>

struct UnsteadyGasField
{
  const double pi = std::atan(1) * 4;
  double velocity(double position) const
  {
    return (- pi * position);
  }
};

#endif //_unsteady_gas_field_h
