#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat operator= called." << std::endl;
	this->type = rhs.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "*** Meow ***" << std::endl;
}