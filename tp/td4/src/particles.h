#ifndef _particles_h
#define _particles_h

#include <vector>
#include <tuple>

#include "mode_init.h"
#include "gas_field.h"
#include "unsteady_gas_field.h"

class Particles
{
private:
  int nb_particles = 0;
  std::vector<std::pair<double, double>> particles_info;
  GasField gas;
  UnsteadyGasField ugas;
  
public:
  // Constructeur
  Particles(int nb, mode_init mode);

  // Destructeur
  ~Particles();

  // Méthode
  void print(double time) const;

  template <typename S>
  void compute_evolution(double time);
  
  void export_particles(double time) const;
};

#endif // _particles_h
