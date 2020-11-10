#include "gtest/gtest.h"

#include "particles.h"
#include "simulator.h"
#include "steady_simulator.h"
#include "unsteady_simulator.h"

TEST(UnitTest, init_particles_test)
{
  Particles p;
}

TEST(UnitTest, print_particles_test)
{
  Particles p;
  p.print(9);
  p.print(-8.87);
}

TEST(UnitTest, compute_particles_evolution_test)
{
  Particles p;
  SteadySimulator ss;
  UnsteadySimulator us;

  p.compute_evolution(ss);
  p.compute_evolution(us);
}

TEST(UnitTest, init_simulator_test)
{
  SteadySimulator ss;
  UnsteadySimulator us;
}

TEST(UnitTest, compute_simulator_test)
{
  Particles p;
  SteadySimulator ss;
  UnsteadySimulator us;

  ss.compute(p);
  us.compute(p);
}

