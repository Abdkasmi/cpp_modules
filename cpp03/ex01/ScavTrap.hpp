#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap&	operator=(ScavTrap const & rhs);

	void	guardGate(void);
	void	attack(const std::string & target);

};