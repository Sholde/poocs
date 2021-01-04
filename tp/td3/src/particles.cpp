#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "particles.h"

Particles::Particles(int nb)
{
  std::cout << "--- init particles ---" << std::endl;

  if (nb < 1)
    throw std::range_error("Need 1 particle at least");
  
  this->nb_particles = nb;
  this->particles_info.resize(this->nb_particles);
  std::fill(this->particles_info.begin(), this->particles_info.end(), std::make_pair<double, double>(0, 0));
}

Particles::~Particles()
{
  std::cout << "--- destroy particles ---" << std::endl;
}

int Particles::get_nb_particles() const
{
  return this->nb_particles;
}

void Particles::print(double time) const
{
  std::cout << "--- print particle positions at time : " << time << " ---" << std::endl;
}

void Particles::compute_evolution(double time)
{
  for (int i = 0; i < this->nb_particles; ++i)
    {
      std::cout << "--- compute particle " << i << " evolution at time : " << time << " ---" << std::endl;
      this->particles_info[i].second = this->gas.speed;
      this->particles_info[i].first += this->particles_info[i].second;
    }
}

void Particles::export_particles(double time) const
{
  std::string pos_file = "particle_positions_t" + std::to_string((int)time);
  std::string vel_file = "particle_velocities_t" + std::to_string((int)time);
    
  std::cout << "--- export particles positions at time : " << time << " in file " << pos_file << std::endl;
  std::cout << "--- export particles velocities at time : " << time << " in file " << vel_file << std::endl;
  
  std::ofstream opos(pos_file, std::ios::binary);
  std::ofstream ovel(vel_file, std::ios::binary);

  for (auto [pos, vel] : this->particles_info)
    {
      opos << pos << std::endl;
      ovel << vel << std::endl;
    }
}
