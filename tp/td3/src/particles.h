#ifndef _particles_h
#define _particles_h

#include <vector>
#include <tuple>

#include "gas_field.h"

class Particles
{
private:
  int nb_particles = 0;
  std::vector<std::pair<double, double>> particles_info;
  GasField gas;
  
public:
  // Constructeur
  Particles(int nb);

  // Destructeur
  ~Particles();

  // getter
  int get_nb_particles() const;

  // Méthode
  void print(double time) const;
  void compute_evolution(double time);
  void export_particles(double time) const;
};

#endif // _particles_h
