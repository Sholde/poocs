#include <iostream>

#include "steady_simulator.h"

void SteadySimulator::compute(Particles& p)
{
  double time = 1;
  std::cout << "--- compute particle evolution at time : " << time << " ---" << std::endl;
  p.print(1);
}
