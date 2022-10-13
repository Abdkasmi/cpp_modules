#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage): ClapTrap(name, hit_points, energy_points, damage)
{
	std::cout << name << " constructor called" << std::endl;
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points == 0)
		std::cout << "No energy points left." << std::endl;
	else if (this->_hit_points == 0)
		std::cout << "No hit points left, repair yourself to attack again." << std::endl;
	else
	{	
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dammage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	return ;
}