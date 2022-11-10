#include "Iter.hpp"

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6};

	iter(tab, 7, add_one);
	for (int i = 0; i < 7; i++)
		std::cout << tab[i] << std::endl;
	return 0;
}