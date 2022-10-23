#pragma once

#include <iostream>

class Brain{

public:

	Brain();
	Brain(Brain const & src);
	Brain&	operator=(Brain const & rhs);
	~Brain();

	std::string	ideas[100];

};