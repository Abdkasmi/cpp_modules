#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:

	std::string _name;

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap&	operator=(DiamondTrap const & rhs);

	void	attack(const std::string & target);

	void	whoAmI(void);

};