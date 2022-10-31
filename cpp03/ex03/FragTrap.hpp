#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage);
	FragTrap(std::string name);
	~FragTrap();
	FragTrap&	operator=(FragTrap const & rhs);

	void	highFivesGuys(void);
	void	attack(const std::string & target);

};