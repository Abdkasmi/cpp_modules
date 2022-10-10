#pragma once

#include "Fixed.hpp"

class Point
{

private:

	Fixed const _x;
	Fixed const _y;

public:

	Point(); // default constructor
	~Point(); // destructor
	Point(float const f_x, float const f_y);
	Point(Point const & src);  //copy constructor
	Point&	operator=(Point const & rhs); // = overload operator

	Fixed 	get_x(void) const;
	Fixed	get_y(void) const;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);