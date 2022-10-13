#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = "";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dammage = FragTrap::_attack_dammage;
	std::cout << "DiamondTrap default constrcutor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dammage = FragTrap::_attack_dammage;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
	return ;
}


DiamondTrap::DiamondTrap(DiamondTrap const & src): ScavTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dammage = rhs._attack_dammage;

	return *this;
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->_name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
	return ;
}
