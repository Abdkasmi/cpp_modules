#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog();
	Animal		*animal[10];

	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	for (int i = 0; i < 10; i++)
		std::cout << animal[i] << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal[i];
	delete cat;
	delete dog;

	std::cout << std::endl;
	std::cout << "-------------------------------- OTHER TEST ------------------------------" << std::endl;
	std::cout << std::endl;

	Cat	dog2;
	{
		Cat	cat = dog2;
	}
	return 0;
}

