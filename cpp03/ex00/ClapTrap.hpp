#pragma once

#include <iostream>
#include <string>

class ClapTrap{

private:

	std::string	_name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_dammage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap&	operator=(ClapTrap const & rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

};