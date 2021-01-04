#include <iostream>

#include "unsteady_simulator.h"

UnsteadySimulator::UnsteadySimulator(int nb_particles) : p(nb_particles)
{
  std::cout << "--- init simulator ---" << std::endl;
}

UnsteadySimulator::~UnsteadySimulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void UnsteadySimulator::compute(double time)
{
  for (double local_time = time - 1 + 0.2; local_time <= time; local_time += 0.2)
    {
      this->p.compute_evolution(local_time);
      this->p.print(local_time);
      this->p.export_particles(local_time);
    }
}
