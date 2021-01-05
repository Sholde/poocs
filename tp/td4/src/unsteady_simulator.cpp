#include <iostream>

#include "mode_init.h"
#include "unsteady_simulator.h"
#include "unsteady_gas_field.h"

UnsteadySimulator::UnsteadySimulator(int nb_particles, double delta_time) : p(nb_particles, mode_init::uniform)
{
  std::cout << "--- init simulator ---" << std::endl;
  this->delta_time = delta_time;
}

UnsteadySimulator::~UnsteadySimulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void UnsteadySimulator::compute(double max_time)
{
  for (double time = 0; time < max_time; time += this->delta_time)
    {
      this->p.compute_evolution<UnsteadyGasField>(time);
      this->p.print(time);
      this->p.export_particles(time);
    }
}
