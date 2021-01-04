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
  for (auto max_time = time + 1; time < max_time; time += this->delta)
    {
      this->p.compute_evolution(time);
      this->p.print(time);
      this->p.export_particles(time);
    }
}
