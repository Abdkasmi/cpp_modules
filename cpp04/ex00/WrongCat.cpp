#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat operator= called." << std::endl;
	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "*** WrongCat sound ***" << std::endl;
}