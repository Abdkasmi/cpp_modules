#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(Cat const & src);
	Cat&	operator=(Cat const & rhs);
	~Cat();

	virtual void		makeSound(void) const;

};