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
		Span span = Span(20);
		std::vector<int> num(10, 20);
		span.addNumber(50);

		try
		{
			span.superAddNumber(num.begin(), num.end());
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
			// for (int i = 0; i < 10; i++)
			// 	std::cout << num[i] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}