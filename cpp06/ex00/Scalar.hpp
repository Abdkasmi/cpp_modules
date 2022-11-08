#pragma once

#include <iostream>
#include <string>

class Scalar {

	private :

		std::string	_value;
		char	_charValue;
		int		_intValue;
		float	_floatValue;
		double	_doubleValue;

	public :
		// Constructors & Destructor
		Scalar();
		Scalar(std::string value);
		Scalar(const Scalar& src);
		~Scalar();

		// Overload operator=
		Scalar& operator=(const Scalar& rhs);

		// Getters
		std::string	getValue(void) const;
		char		getChar(void) const;
		int			getInt(void) const;
		float		getFloat(void) const;
		double		getDouble(void) const;

};