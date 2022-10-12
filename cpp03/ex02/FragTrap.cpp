#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructor called !" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage): ClapTrap(name, hit_points, energy_points, damage)
{
	std::cout << "FragTrap " << name << " constructor called !" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "FragTrap copie constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_dammage = rhs.getAttackDamage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{	
		std::cout << this->_name << " wants to high five" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points < 1)
		std::cout << this->_name << " can't high five, no more energy" << std::endl;
	else if (this->_hit_points < 1)
		std::cout << this->_name << " can't high five, he's dead" << std::endl;
	return ;
}