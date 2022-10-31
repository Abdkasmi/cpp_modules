#include "ClapTrap.hpp"

// Constructors 

ClapTrap::ClapTrap(): _name("default name"), _hit_points(10), _energy_points(10), _attack_dammage(0)
{
	std::cout << "Default constructor called !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_dammage(0)
{
	std::cout << name << " constructor called !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int damage): _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_dammage(damage)
{
	std::cout << "Assignment constructor called !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src): _name(src._name), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_dammage(src._attack_dammage)
{
	std::cout << "Copy constructor called !" << std::endl;
	return ;
}

// Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called !" << std::endl;
	return ;
}

// Operator =

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_dammage = rhs.getAttackDamage();

	return *this;
}

// Getters

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return this->_hit_points;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energy_points;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return this->_attack_dammage;
}

// Member functions

void	ClapTrap::attack(const std::string & target)
{
	if (this->_energy_points == 0)
		std::cout << "No energy points left." << std::endl;
	else if (this->_hit_points == 0)
		std::cout << "No hit points left, repair yourself to attack again." << std::endl;
	else
	{	
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dammage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " took " << "-" << amount << " hit points after this attack." << std::endl;
	if (this->_hit_points < amount)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " healed himself for " << amount << " hit points." << std::endl;
	this->_hit_points += amount;
	return ;
}