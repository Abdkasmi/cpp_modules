#include "Point.hpp"

// Constructors

Point::Point(): _x(0), _y(0)
{
	return ;
}

Point::Point(float const f_x, float const f_y): _x(f_x), _y(f_y)
{
	return ;
}

Point::Point(Point const & src): _x(src._x), _y(src._y)
{
	return ;
}

// Destructor

Point::~Point()
{
	return ;
}

// = overload operator

Point&	Point::operator=(Point const & rhs)
{
	(void)rhs;
	return *this;
}

// Get

Fixed Point::get_x(void) const
{
	return (this->_x);
}

Fixed Point::get_y(void) const
{
	return (this->_y);
}