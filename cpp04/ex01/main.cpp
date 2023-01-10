#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main()
{
	int i = 2;
	int j = 0;
	const Animal *animal[i];
	// Brain("idea");
	while(j < i)
	{
		if (j < i/2)
		{
			animal[j] = new Cat();
		}
		else
		{
			animal[j] = new Dog();
		}
		j++;
	}
	for ( int i = 0; i < 2; i++ )
	{
		delete animal[i];
	}
	return 0;
}