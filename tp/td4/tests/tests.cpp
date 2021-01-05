#include "gtest/gtest.h"

#include "mode_init.h"
#include "particles.h"
#include "steady_simulator.h"
#include "unsteady_simulator.h"
#include "gas_field.h"
#include "unsteady_gas_field.h"

TEST(UnitTest, init_particles_test)
{
  Particles p(1, mode_init::fixed);
}

TEST(UnitTest, print_particles_test)
{
  Particles p(1, mode_init::fixed);
  p.print(9);
  p.print(-8.87);
}

TEST(UnitTest, compute_particles_evolution_test)
{
  Particles p(2, mode_init::fixed);
  p.compute_evolution<GasField>(1);
  p.compute_evolution<UnsteadyGasField>(1);
}

TEST(UnitTest, init_simulator_test)
{
  SteadySimulator ss(78, 1);
  UnsteadySimulator us(1, 0.2);
}

TEST(UnitTest, compute_simulator_test)
{
  SteadySimulator ss(1, 0.2);
  UnsteadySimulator us(1, 0.2);

  ss.compute(1);
  us.compute(1);
}

