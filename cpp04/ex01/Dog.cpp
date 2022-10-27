#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain_dog = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = src.getType();
	this->brain_dog = new Brain();
	//*this = src;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog operator= called." << std::endl;
	this->type = rhs.type;
	if (this->brain_dog)
	{
		delete this->brain_dog;
		this->brain_dog = new Brain;
	}
	this->brain_dog = rhs.brain_dog;
	return *this;
}

Dog::~Dog()
{
	delete this->brain_dog;
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "*** Bark ***" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}