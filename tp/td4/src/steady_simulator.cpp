#include <iostream>

#include "mode_init.h"
#include "steady_simulator.h"
#include "gas_field.h"

SteadySimulator::SteadySimulator(int nb_particles, double delta_time) : p(nb_particles, mode_init::fixed)
{
  std::cout << "--- init simulator ---" << std::endl;
  this->delta_time = delta_time;
}

SteadySimulator::~SteadySimulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void SteadySimulator::compute(double max_time)
{
  for (double time = 1; time <= max_time; ++time)
    {
      time;
      this->p.compute_evolution<GasField>(time);
      this->p.print(time);
    }
  
  this->p.export_particles(max_time);
}
