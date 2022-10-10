#include "Point.hpp"

int main( void )
{
	Point a(0, 4);
	Point b(4, 7);
	Point c(6, 1);
	Point p(3, 4);
	Point r(2, 3);

//	std::cout << "P1 " << (bsp(a, b, c ,p) ? "is in triangle" : "is not in triangle") << std::endl;
//	std::cout << "P2 " << (bsp(a, b, c ,a) ? "is in triangle" : "is not in triangle") << std::endl;
//	std::cout << "P3 " << (bsp(a, b, c ,r) ? "is in triangle" : "is not in triangle") << std::endl;
	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	std::cout << bsp(a, b, c, r) << std::endl;
}