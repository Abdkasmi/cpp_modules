#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal		*animal = new Animal();
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog();

	std::cout << "Animal : " << animal->getType() << std::endl;
	std::cout << "Cat : " << cat->getType() << std::endl;
	std::cout << "Dog : " << dog->getType() << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete dog;
	delete animal;
	std::cout << std::endl;
	std::cout << "----------- WrongAnimal --------------" << std::endl;
	std::cout << std::endl;
	const WrongAnimal	*w_animal = new WrongAnimal();
	const WrongAnimal	*w_cat = new WrongCat();
	const WrongAnimal	*w_cat2 = new WrongCat();

	std::cout << "WrongAnimal : " << w_animal->getType() << std::endl;
	std::cout << "WrongCat : " << w_cat->getType() << std::endl;
	std::cout << "WrongCat2 : " << w_cat2->getType() << std::endl;
	w_animal->makeSound();
	w_cat->makeSound();
	w_cat2->makeSound();
	delete w_cat;
	delete w_cat2;
	delete w_animal;
	return 0;
}