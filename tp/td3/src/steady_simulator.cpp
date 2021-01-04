#include <iostream>

#include "steady_simulator.h"

SteadySimulator::SteadySimulator(int nb_particles) : p(nb_particles)
{
  std::cout << "--- init simulator ---" << std::endl;
}

SteadySimulator::~SteadySimulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void SteadySimulator::compute(double time)
{
  this->p.compute_evolution(time);
  this->p.print(time);
  this->p.export_particles(time);
}
