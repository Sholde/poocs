#ifndef _unsteady_simulator_h
#define _unsteady_simulator_h

#include "simulator.h"
#include "particles.h"

class UnsteadySimulator : public Simulator
{
private:
  const double delta = 0.2;
  Particles p;
  
public:
  UnsteadySimulator(int nb_particles);
  ~UnsteadySimulator();
  
  void compute(double max_time) override;
};

#endif // _unsteady_simulator_h
