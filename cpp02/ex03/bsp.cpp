#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
	// float value = (a.get_x().toFloat()*(b.get_y().toFloat() - c.get_y().toFloat() + b.get_x().toFloat()*(c.get_y().toFloat()-a.get_y().toFloat())+ c.get_x().toFloat()*(a.get_y().toFloat()-b.get_y().toFloat()))/2.0);

	// if (value < 0)
	// 	value *= -1;
	// return value;
	float aX, aY, bX, bY, cX, cY, ret;

	aX = a.get_x().toFloat();
	aY = a.get_y().toFloat();
	bX = b.get_x().toFloat();
	bY = b.get_y().toFloat();
	cX = c.get_x().toFloat();
	cY = c.get_y().toFloat();
	
	ret = ((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) /2.0);
	if (ret < 0)
		ret *= -1;
	return (ret);
}
  
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{  
	float A = area (a, b, c);
	float A1 = area (point, b, c);
    float A2 = area (a, point, c); 
	float A3 = area (a, b, point);
  
	if (!A1 || !A2 || !A3)
		return false;
	return (A == A1 + A2 + A3);
}