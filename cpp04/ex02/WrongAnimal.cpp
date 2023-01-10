#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constractor\n";
	this->type = "WrongAnimal";
};

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Parametrized WrongAnimal constractor\n";
	this->type = type;
};

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src)
{
	this->type = src.type;
	return *this;
};

std::string WrongAnimal::getType() const
{
	return this->type;
};

void WrongAnimal::makeSound() const
{
	std::cout << getType() << " make a sound\n";
};


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal distractor\n";
}
