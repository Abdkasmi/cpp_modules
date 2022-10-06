#pragma once

#include <iostream>

class Fixed{

private:

	int	_value;
	int const static _constValue;

public:
	
	Fixed();
	Fixed(Fixed const & src);
	Fixed	&operator=(Fixed const & rhs);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};