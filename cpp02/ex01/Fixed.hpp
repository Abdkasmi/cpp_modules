#pragma once

#include <iostream>
#include <cmath>


class Fixed{

private:

	int	_value;
	int const static _constValue;

public:
	
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const & src);
	Fixed	&operator=(Fixed const & rhs);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream&	operator<<(std::ostream &o, Fixed const & rhs);