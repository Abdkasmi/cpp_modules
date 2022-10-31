#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain {

private:

	Brain	*brain_cat;

public:

	Cat();
	Cat(Cat const & src);
	Cat&	operator=(Cat const & rhs);
	~Cat();

	virtual void		makeSound(void) const;
	std::string	getType(void) const;

};