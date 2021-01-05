#ifndef _unsteady_simulator_h
#define _unsteady_simulator_h

#include "simulator.h"
#include "particles.h"

class UnsteadySimulator : public Simulator
{
private:
  double delta_time = 0.0;
  Particles p;
  
public:
  UnsteadySimulator(int nb_particles, double delta_time);
  ~UnsteadySimulator();
  
  void compute(double max_time) override;
};

#endif // _unsteady_simulator_h
