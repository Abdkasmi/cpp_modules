#include "easyfind.hpp"
#include <list>
#include <vector>

int main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	std::list<int> list2;
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	list2.push_back(4);

	std::cout << "====== List 1 ======" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(v, 7);
		if (it == v.end())
			throw NoOccurrenceException();
		std::cout << "Occurrence found : " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n====== List 2 ======" << std::endl;
	try
	{
		std::list<int>::iterator it2 = easyfind(list2, 3);
		if (it2 == list2.end())
			throw NoOccurrenceException();
		std::cout << "Occurrence found : " << *it2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}