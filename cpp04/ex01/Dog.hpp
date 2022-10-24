#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain {

private: 

	Brain	*brain_dog;

public:

	Dog();
	Dog(Dog const & src);
	Dog& operator=(Dog const & rhs);
	~Dog();

	virtual void		makeSound(void) const;

};