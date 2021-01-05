#ifndef _steady_simulator_h
#define _steady_simulator_h

#include "simulator.h"
#include "particles.h"

class SteadySimulator : public Simulator
{
private:
  double delta_time = 0.0;
  Particles p;
  
public:
  SteadySimulator(int nb_particles, double delta_time);
  ~SteadySimulator();
  
  void compute(double max_time) override;
};

#endif // _steady_simulator_h
