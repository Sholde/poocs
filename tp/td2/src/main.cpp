#include "particles.h"
#include "simulator.h"
#include "steady_simulator.h"
#include "unsteady_simulator.h"

int main()
{
  Particles p;
  SteadySimulator ss;
  UnsteadySimulator us;
  
  p.compute_evolution(ss);
  p.compute_evolution(us);

  return 0;
}
