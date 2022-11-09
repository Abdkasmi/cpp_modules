#include "Base.hpp"
#include <cstdlib>

int main ( void )
{
    Base *	test;

    srand(time(0));
    std::cout << "== Test 1 ==================================" << std::endl;

    test = generate();
    
    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);

	delete test;

    std::cout << "== Test 2 ==================================" << std::endl;

    test = generate();

    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);

	delete test;

    std::cout << "== Test 3 ==================================" << std::endl;

    test = generate();

    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);
    
	delete test;

    return (0);
}