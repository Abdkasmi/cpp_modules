#include "Base.hpp"
#include <cstdlib>
#include <exception>

Base::~Base()
{
	return ;
}

Base* generate(void)
{
	int	r = rand() % 3;

	if (r == 0)
	{
		std::cout << "A instance" << std::endl;
		return (new A);
	}
	else if (r == 1)
	{
		std::cout << "B instance" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C instance" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Instance of A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Instance of B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Instance of C" << std::endl;
	else
		std::cout << "Not recognized" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Instance of A" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Instance of B" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "Instance of C" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}