#include "easyfind.hpp"
#include <list>
#include <vector>

int main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	std::list<int> list2;
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	list2.push_back(3);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 1);
		if (it == v.end())
			throw NoOccurrenceException();
		std::cout << "Occurrence found : " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator it2 = easyfind(list2, 1);
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