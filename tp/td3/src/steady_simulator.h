#ifndef _steady_simulator_h
#define _steady_simulator_h

#include "simulator.h"
#include "particles.h"

class SteadySimulator : public Simulator
{
private:
  Particles p;
  
public:
  SteadySimulator(int nb_particles);
  ~SteadySimulator();
  
  void compute(double max_time) override;
};

#endif // _steady_simulator_h
