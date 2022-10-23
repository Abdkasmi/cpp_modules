#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal operator= called." << std::endl;
	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*** WrongAnimal sound ***" << std::endl;
}