#include "Point.hpp"

int main( void )
{
	Point a(0, 4);
	Point b(4, 7);
	Point c(6, 1);
	Point p(3, 4);
	Point r(1, 3);
	Point f(5, 3);

	std::cout << "P1 " << (bsp(a, b, c ,p) ? "is in triangle" : "is not in triangle") << std::endl; // yes
	std::cout << "P2 " << (bsp(a, b, c ,a) ? "is in triangle" : "is not in triangle") << std::endl;	// no 
	std::cout << "P3 " << (bsp(a, b, c ,r) ? "is in triangle" : "is not in triangle") << std::endl; // no
	std::cout << "P4 " << (bsp(a, b, c ,f) ? "is in triangle" : "is not in triangle") << std::endl; // yes 

	return ;
}