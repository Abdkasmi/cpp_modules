#include "Scalar.hpp"
#include <cstdlib>
#include <limits>

// Constructors & Destructor

Scalar::Scalar(): _value("0"), _charValue('0'), _intValue(0), _floatValue(0.0f), _doubleValue(0.0)
{
	std::cout << "Scalar constructor called" << std::endl;
	return ;
}

Scalar::Scalar(std::string value): _value(value)
{
	this->_charValue = static_cast<char>(std::atoi(value.c_str()));
	this->_intValue = static_cast<int>(std::atoi(value.c_str()));
	this->_floatValue = static_cast<float>(std::atof(value.c_str()));
	this->_doubleValue = static_cast<double>(std::atof(value.c_str()));
	std::cout << "Scalar constructor called" << std::endl;
	return ;
}

Scalar::Scalar(const Scalar& src): _value(src._value), _charValue(src._charValue), _intValue(src._intValue), _floatValue(src._floatValue), _doubleValue(src._doubleValue)
{
	std::cout << "Scalar copy constructor called" << std::endl;
	return ;
}

Scalar::~Scalar()
{
	std::cout << "Scalar destructor called" << std::endl;
	return ;
}

// Overload operator=

Scalar& Scalar::operator=(const Scalar& rhs)
{
	this->_value = rhs._value;
	this->_doubleValue = rhs._doubleValue;
	this->_floatValue = rhs._floatValue;
	this->_intValue = rhs._intValue;
	this->_charValue = rhs._charValue;
	return (*this);
}

// Getters

std::string Scalar::getValue(void) const
{
	return this->_value;
}

char	Scalar::getChar(void) const
{
	if(this->_value == "0" && this->_intValue == 0)
	{
		std::cout << "Impossible";
		return 1;
	}
	else if (!isprint(this->_charValue))
	{
		std::cout << "non displayable";
		return 1;
	}
	return this->_charValue;
}
int		Scalar::getInt(void) const
{
	if (this->_value != "0" && this->_intValue == 0 && this->_floatValue != 0)
	{
		std::cout << "Impossible" << std::endl;
		return 1;
	}
	return this->_intValue;
}

float	Scalar::getFloat(void) const
{
	return this->_floatValue;
}

double	Scalar::getDouble(void) const
{
	return this->_doubleValue;
}
