#include <iostream>

#include "steady_simulator.h"

SteadySimulator::SteadySimulator(Particles &p) : p(p)
{
  std::cout << "--- init simulator ---" << std::endl;
}

SteadySimulator::~SteadySimulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void SteadySimulator::compute(double time)
{
  time++;
  this->p.compute_evolution(time);
  this->p.print(time);
}
