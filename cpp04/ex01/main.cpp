#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	// const Animal		*cat = new Cat();
	// const Animal		*dog = new Dog();
	// Animal		*animal[10];
	Cat	dog;
	{
		Cat	cat = dog;
	}

	// for (int i = 0; i < 5; i++)
	// 	animal[i] = new Dog();
	// for (int i = 5; i < 10; i++)
	// 	animal[i] = new Cat();
	// for (int i = 0; i < 10; i++)
		//delete animal[i];
	// delete cat;
	// delete dog;
	//system("leaks animal");
	return 0;
}

