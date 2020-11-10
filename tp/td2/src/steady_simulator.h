#ifndef _steady_simulator_h
#define _steady_simulator_h

#include "simulator.h"

class SteadySimulator : public Simulator
{
 public:
  void compute(Particles& p) override;
};

#endif // _steady_simulator_h
