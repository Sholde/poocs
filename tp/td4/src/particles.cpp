#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

#include "particles.h"

Particles::Particles(int nb, mode_init mode)
{
  std::cout << "--- init particles ---" << std::endl;

  if (nb < 1)
    throw std::range_error("Need 1 particle at least");
  
  this->nb_particles = nb;
  this->particles_info.resize(this->nb_particles);

  double d = - this->nb_particles;
  
  switch (mode)
    {
    case mode_init::fixed:
      std::fill(this->particles_info.begin(), this->particles_info.end(), std::make_pair<double, double>(1, 0));
      break;
    case mode_init::uniform:
      std::for_each(this->particles_info.begin(), this->particles_info.end(),
		    [&d, nb](auto &pair)
		    {
		      pair = std::make_pair<double, double>((double &&)d / nb, 0);
		      d += 2;
		    }
		    );
      break;
    }
}

Particles::~Particles()
{
  std::cout << "--- destroy particles ---" << std::endl;
}

void Particles::print(double time) const
{
  std::cout << "--- print particle positions at time : " << time << " ---" << std::endl;
}

template <>
void Particles::compute_evolution<GasField>(double time)
{
  for (int i = 0; i < this->nb_particles; ++i)
    {
      std::cout << "--- compute particle " << i << " evolution at time : " << time << " ---" << std::endl;

      // Set speed
      this->particles_info[i].second = this->gas.speed;

      // Set position
      this->particles_info[i].first += this->particles_info[i].second * time;
    }
}

template <>
void Particles::compute_evolution<UnsteadyGasField>(double time)
{
  for (int i = 0; i < this->nb_particles; ++i)
    {
      std::cout << "--- compute particle " << i << " evolution at time : " << time << " ---" << std::endl;

      // Set speed
      this->particles_info[i].second = this->ugas.velocity(this->particles_info[i].first);

      // Set position
      this->particles_info[i].first += this->particles_info[i].second * time;
    }
}

void Particles::export_particles(double time) const
{
  std::string pos_file = "particle_positions_" + std::to_string(time);
  std::string vel_file = "particle_velocities_" + std::to_string(time);
    
  std::cout << "--- Export particles positions at time = " << time << " in file " << pos_file << std::endl;
  std::cout << "--- Export particles velocities at time = " << time << " in file " << vel_file << std::endl;

  std::ofstream opos(pos_file, std::ios::app);
  std::ofstream ovel(vel_file, std::ios::app);

  int count = 0;

  for (auto [pos, vel] : this->particles_info)
    {
      opos << count << " " << pos << std::endl;
      ovel << count << " " << vel << std::endl;

      count++;
    }
}
