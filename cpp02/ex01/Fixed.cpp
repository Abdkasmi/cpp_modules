#include "Fixed.hpp"

int _constValue = 8;


// Constructors and destructor

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * 256;
	return ;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * 256));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destrctor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Operators

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

// Get

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

// Set

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

// Convertions

float	Fixed::toFloat(void) const
{
	return (float(this->_value) / 256);
}

int	Fixed::toInt(void) const
{
	return (this->_value / 256);
}
