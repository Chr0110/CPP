#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constractor\n";
	this->type = "Dog";
	this->brain = new Brain();
};

Dog::Dog(std::string type)
{
	std::cout << "Parametrized Dog constractor\n";
	this->brain = new Brain();
	this->type = type;
};

Dog::Dog(const Dog &dog)
{
	std::cout << "Parametrized Dog copy constractor\n";
	*this = dog;
};

Dog & Dog::operator=(Dog const &src)
{
	this->type = src.type;
	if(this->brain)
		delete this->brain; 
	this->brain = new Brain(*src.brain);
	return *this;
};

void Dog::makeSound() const
{
	std::cout << "Woof\n";
};

Dog::~Dog()
{
	std::cout << "Dog distractor\n";
	delete this->brain;
};