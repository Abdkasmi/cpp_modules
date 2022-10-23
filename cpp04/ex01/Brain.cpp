#include "Brain.hpp"

Brain::Brain()
{
	
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain operator= called." << std::endl;
	*this = rhs;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}