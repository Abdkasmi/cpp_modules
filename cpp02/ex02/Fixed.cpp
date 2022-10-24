#include "Fixed.hpp"

int _constValue = 8;


// Constructors and destructor

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(int const value)
{
	//std::cout << "Int constructor called" << std::endl;
	//256 bcs bitshift 8 -> 8nb after .
	this->_value = value * 256;
	return ;
}

Fixed::Fixed(float const value)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * 256));
	return ;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destrctor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Operators

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

// Comparaison operators

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_value != rhs.getRawBits());
}

// Arithmetic Operators

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	n;

	n.setRawBits(this->_value + rhs.getRawBits());
	return (n);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	n;

	n.setRawBits(this->_value - rhs.getRawBits());
	return (n);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	n;

	n.setRawBits(this->_value * rhs.toFloat());
	return (n);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	n;

	n.setRawBits(this->_value / rhs.toFloat());
	return (n);
}

// Incrementation Operators (prefix)

Fixed&	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

// Incrementation Operators (postfix)

Fixed	Fixed::operator++(int)
{
	Fixed	tmp= *this;

	++*this;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--*this;
	return (tmp);
}

// Min and Max functions

Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1 > nb2)
		return (nb2);
	return (nb1);
}

const Fixed&	Fixed::min(Fixed const & nb1, Fixed const & nb2)
{
	if (nb1 > nb2)
		return (nb2);
	return (nb1);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

const Fixed&	Fixed::max(Fixed const & nb1, Fixed const & nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
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
