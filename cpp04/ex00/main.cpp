#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "_____________________________________\n";
	const WrongAnimal *cat = new WrongCat();
	cat->makeSound();
	delete i;
	delete meta;
	delete j;
	// delete cat;
 	return 0;
}