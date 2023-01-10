#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constractor\n";
	this->type = "Animal";
};

Animal::Animal(std::string type)
{
	std::cout << "Parametrized Animal constractor\n";
	this->type = type;
};

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal copy constractor\n";
	*this = animal;
	return;
};

Animal & Animal::operator=(Animal const &src)
{
	this->type = src.type;
	return *this;
};

std::string Animal::getType() const
{
	return this->type;
};

void Animal::makeSound() const
{
	std::cout << getType() << " make a sound\n";
};


Animal::~Animal()
{
	std::cout << "Animal distractor\n";
}
