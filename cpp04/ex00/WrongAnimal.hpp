#pragma once

#include <iostream>

class WrongAnimal {

protected:

	std::string	type;

public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal&	operator=(WrongAnimal const & rhs);
	~WrongAnimal();

	std::string 		getType(void) const;
	void		makeSound(void) const;

};