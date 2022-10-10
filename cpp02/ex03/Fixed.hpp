#pragma once

#include <iostream>
#include <cmath>


class Fixed{

private:

	int	_value;
	int const static _constValue;

public:

	Fixed(); // default constructor
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const & src); //copy constructor
	Fixed	&operator=(Fixed const & rhs); // = overload operator
	~Fixed(); // destructor

	// Comparaison Operators
	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

	// Ariythmetic Operators
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	// prefix incrementation
	Fixed&	operator++();
	Fixed&	operator--();

	// postfix incrementation
	Fixed	operator++(int);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&	min(Fixed& nb1, Fixed& nb2);
	static  const Fixed&	min(Fixed const & nb1, Fixed const & nb2);
	static Fixed&	max(Fixed& nb1, Fixed& nb2);
	static const Fixed&	max(Fixed const & nb1, Fixed const & nb2);
};

std::ostream&	operator<<(std::ostream &o, Fixed const & rhs);