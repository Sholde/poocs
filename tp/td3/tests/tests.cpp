#include "gtest/gtest.h"

#include "particles.h"
#include "steady_simulator.h"
#include "unsteady_simulator.h"

TEST(UnitTest, init_particles_test)
{
  Particles p(1);
}

TEST(UnitTest, print_particles_test)
{
  Particles p(1);
  p.print(9);
  p.print(-8.87);
}

TEST(UnitTest, compute_particles_evolution_test)
{
  Particles p(2);
  p.compute_evolution(1);
}

TEST(UnitTest, init_simulator_test)
{
  SteadySimulator ss(78);
  UnsteadySimulator us(1);
}

TEST(UnitTest, compute_simulator_test)
{
  SteadySimulator ss(1);
  UnsteadySimulator us(1);

  ss.compute(1);
  us.compute(1);
}

