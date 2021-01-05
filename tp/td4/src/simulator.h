#ifndef _simulator_h
#define _simulator_h

class Simulator
{
public:
  // Destructeur
  virtual ~Simulator() = default;

  // Méthode
  virtual void compute(double max_time) = 0;
};

#endif // _simulator_h
