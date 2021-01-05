#include <iostream>
#include <memory>

#include "unsteady_simulator.h"

int main(int argc, char **argv)
{
  // Check argument
  if (argc != 5)
    {
      std::cout << "Usage: " << argv[0] << " [SIMULATOR] [NUMBER OF PARTICLES] [DELTA TIME] [MAX TIME]" << std::endl;
      return 1;
    }

  // Init simulator
  const std::string simulator_type = argv[1];
  const int nb_particles = strtoll(argv[2], nullptr, 10);
  const double delta_time = strtod(argv[3], nullptr);
  const double max_time = strtod(argv[4], nullptr);

  std::unique_ptr<Simulator> s = nullptr;
  if (simulator_type == "--steady")
    {
      s = std::make_unique<UnsteadySimulator>(nb_particles, delta_time);
    }
  else if (simulator_type == "--unsteady")
    {
      s = std::make_unique<UnsteadySimulator>(nb_particles, delta_time);
    }
  else
    {
      return 1;
    }

  // Compute
  s->compute(max_time);

  return 0;
}
