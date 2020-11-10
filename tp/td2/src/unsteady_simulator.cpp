#include <iostream>

#include "unsteady_simulator.h"

void UnsteadySimulator::compute(Particles& p)
{
  for (double time = 0; time < 1; time += 0.2)
    {
      std::cout << "--- compute particle evolution at time : " << time << " ---" << std::endl;
      p.print(time);
    }
}
