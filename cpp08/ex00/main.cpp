#include "easyfind.hpp"
#include <list>

int main(void)
{
	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	std::list<int> list2;
	list2.push_back(1);
	list2.push_back(1);
	list2.push_back(2);;
	list2.push_back(3);

	try
	{
		std::list<int>::iterator it = easyfind(list, 1);
		std::cout << "Occurrence found : " << *it << std::endl;
		std::list<int>::iterator it2 = easyfind(list2, 1);
		std::cout << "Occurrence found : " << *it2 << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}