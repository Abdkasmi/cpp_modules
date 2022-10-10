#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	Fixed c(10);
	Fixed const d(3.5f);
	Fixed e = c;
	
	std::cout << std::endl << "---- My tests ----" << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c + e = " << c + e << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "c > d = " << (c > d) << std::endl;
	std::cout << "c < d = " << (c < d) << std::endl;
	std::cout << "c >= d = " << (c >= d) << std::endl;
	std::cout << "c <= d = " << (c <= d) << std::endl;
	std::cout << "c == d = " << (c == d) << std::endl;
	std::cout << "c != d = " << (c != d) << std::endl;
	std::cout << "max = " <<Fixed::max(c, d) << std::endl;
	std::cout << "min = " <<Fixed::min(c, d) << std::endl;

	return 0;
}