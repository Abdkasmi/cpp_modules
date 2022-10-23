#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog operator= called." << std::endl;
	this->type = rhs.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "*** Bark ***" << std::endl;
}