#ifndef _unsteady_simulator_h
#define _unsteady_simulator_h

#include "simulator.h"
#include "particles.h"

class UnsteadySimulator : public Simulator
{
private:
  Particles &p;
  
public:
  UnsteadySimulator(Particles &p);
  ~UnsteadySimulator();
  
  void compute(double time) override;
};

#endif // _unsteady_simulator_h
