#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

// Interface class
class solver_interface
{
public:
  virtual void solve() = 0;
  virtual ~solver_interface() = default;
};

// Method direct
class direct_solver : public solver_interface
{
private:
  std::string name;

public:
  direct_solver(std::string name) : name(name) {}

  void solve() override
  {
    std::cout << "direct_solver::solve" << std::endl;
  }
};

// Method iterative
class iterative_solver : public solver_interface
{
private:
  std::string name;

public:
  iterative_solver(std::string name) : name(name) {}

  void solve() override
  {
    std::cout << "iterative_solver::solve" << std::endl;
  }
};

// Main class
class solver
{
private:
  std::vector<std::unique_ptr<solver_interface>> v;

public:
  template<typename solver_template>
  void add_solver(std::string name)
  {
    this->v.push_back(std::make_unique<solver_template>(name));
  }

  void solve()
  {
    std::cout << "solve::solve" << std::endl;

    // Range loop
    for (auto &s : this->v)
      {
	s->solve();
      }

    // For each (easy to parallelize)
    std::for_each(this->v.begin(), this->v.end(),
		  [](auto &s) { s->solve(); });
  }
};

// Main function
int main()
{
  solver s{};
  s.add_solver<direct_solver>("direct_solver");
  s.add_solver<iterative_solver>("iterative_solver");
  s.solve();
  
  return 0;
}
