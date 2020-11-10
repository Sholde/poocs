#ifndef _unsteady_simulator_h
#define _unsteady_simulator_h

#include "simulator.h"

class UnsteadySimulator : public Simulator
{
 public:
  void compute(Particles& p) override;
};

#endif // _unsteady_simulator_h
