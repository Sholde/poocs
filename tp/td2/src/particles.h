#ifndef _particles_h
#define _particles_h

#include "class.h"
#include "simulator.h"

class Particles
{
 public:
  // Constructeur
  Particles();

  // Destructeur
  ~Particles();

  // Méthode
  void print(double time);
  void compute_evolution(Simulator& s);
};

#endif // _particles_h
