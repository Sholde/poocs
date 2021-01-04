#include "particles.h"
#include "simulator.h"
#include "steady_simulator.h"
#include "unsteady_simulator.h"

int main()
{
  Particles p(1);
  SteadySimulator ss(p);
  UnsteadySimulator us(p);

  int max_time = 2;
  for (int time = 0; time < max_time; ++time)
    {
      ss.compute(time);
      us.compute(time);
      p.export_particles(time);
    }

  return 0;
}
