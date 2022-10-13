#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default name", 100, 50, 20)
{
	std::cout << "ScavTrap " << "Default constructor called !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage): ClapTrap(name, hit_points, energy_points, damage)
{
	std::cout << "ScavTrap " << name << " constructor called !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
	std::cout << "ScavTrap copie constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_dammage = rhs.getAttackDamage();

	return *this;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_energy_points == 0)
		std::cout << "No energy points." << std::endl;
	else if (this->_hit_points == 0)
		std::cout << "No hit points, repair yourself." << std::endl;
	else
	{	
		std::cout << "ScavTrap " << this->_name << " touched " << target << ", causing " << this->_attack_dammage << " damage!" << std::endl;
		this->_energy_points--;
	}
	this->_energy_points--;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->_energy_points < 1)
	{
		std::cout << "ScavTrap " << this->_name << " can't guard, he has no more energy." << std::endl;
		return;
	}
	else if (this->_hit_points < 1)
	{
		std::cout << "ScavTrap " << this->_name << " can't guard, he's dead." << std::endl;
		return;
	}
	std::cout << this->_name << " is in guard!" << std::endl;
	this->_energy_points--;
	return ;
}