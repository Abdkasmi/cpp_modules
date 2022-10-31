#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = -1; i < 100; ++i)
		this->ideas[i] = src.ideas[i];
}

Brain&	Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain operator= called." << std::endl;
	for (int i = -1; i < 100; ++i)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}