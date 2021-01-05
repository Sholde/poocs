#include <iostream>
#include <memory>

#include "steady_simulator.h"

int main(int argc, char **argv)
{
  // Check argument
  if (argc != 3)
    {
      std::cout << "Usage: " << argv[0] << " [NUMBER OF PARTICLES] [MAX TIME]" << std::endl;
      return 1;
    }

  // Init simulator
  const int nb_particles = strtoll(argv[1], nullptr, 10);
  std::unique_ptr<Simulator> s = std::make_unique<SteadySimulator>(nb_particles);

  // Compute
  const int max_time = strtoll(argv[2], nullptr, 10);
  s->compute(max_time);

  return 0;
}
