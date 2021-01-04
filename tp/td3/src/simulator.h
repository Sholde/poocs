#ifndef _simulator_h
#define _simulator_h

class Simulator
{
public:
  // Destructeur
  virtual ~Simulator() = default;

  // Méthode
  virtual void compute(double time) = 0;
};

#endif // _simulator_h
