#ifndef _simulator_h
#define _simulator_h

#include "class.h"
#include "particles.h"

class Simulator
{
 public:
  // Constructeur
  Simulator();
  
  // Destructeur
  virtual ~Simulator();

  // Méthode
  virtual void compute(Particles& p);
};

#endif // _simulator_h
