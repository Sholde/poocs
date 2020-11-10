#include <iostream>

#include "simulator.h"

Simulator::Simulator()
{
  std::cout << "--- init simulator ---" << std::endl;
}

Simulator::~Simulator()
{
  std::cout << "--- destroy simulator ---" << std::endl;
}

void Simulator::compute(Particles& p)
{
  std::cout << "--- error ---" << std::endl;
}
