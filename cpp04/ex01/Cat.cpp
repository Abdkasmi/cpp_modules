#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain_cat = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->brain_cat = new Brain();
	*this = src;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat operator= called." << std::endl;
	this->type = rhs.type;
	this->brain_cat = rhs.brain_cat;
	return *this;
}

Cat::~Cat()
{
	delete this->brain_cat;
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "*** Meow ***" << std::endl;
}