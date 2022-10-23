#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const & src): type("Animal")
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal&	Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal operator= called." << std::endl;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "*** Weird Animal sound ***" << std::endl;
}