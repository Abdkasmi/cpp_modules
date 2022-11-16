#include "Span.hpp"
#include <array>
#include <cstdlib>
#include <list>

int main()
{
	std::cout << "\n ================ PDF TEST ================" << std::endl;
	{
		Span sp = Span(5);
		try
		{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\n ================ MY TEST ================" << std::endl;
	{
		Span span = Span(10000);
		std::array<int, 10000> num;
		long	random;
		for (int i = 0; i < 9999; i++)
		{
			random = rand() % 1000000;
			for (unsigned int i = 0; i < num.size(); i++)
				if (random == num[i]) {
					random = rand() % 1000000; 
					i = 0;
				}
			num[i] = random;
		}
		try
		{
		span.superAddNumber(num.begin(), num.end());
		span.addNumber(-999782);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}