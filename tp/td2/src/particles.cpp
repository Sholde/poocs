#include <iostream>

#include "particles.h"

Particles::Particles()
{
  std::cout << "--- init particles ---" << std::endl;
}

Particles::~Particles()
{
  std::cout << "--- destroy particles ---" << std::endl;
}

void Particles::print(double time)
{
  std::cout << "--- print particle positions at time : " << time << " ---" << std::endl;
}

void Particles::compute_evolution(Simulator& s)
{
  s.compute(*this);
}
