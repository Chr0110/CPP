#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constractor\n";
	this->type = "Cat";
	this->brain = new Brain();
};

Cat::Cat(std::string type)
{
	std::cout << "Parametrized Cat constractor\n";
	this->type = type;
	this->brain = new Brain();
};

Cat::Cat(const Cat &a)
{
	std::cout << "Parametrized Cat copy constractor\n";
	*this = a;
}
Brain Cat::getBrain()
{
   return *this->brain;
};

Cat & Cat::operator=(Cat const &src)
{
	this->type = src.type;
	if(this->brain)
		delete this->brain; 
	this->brain = new Brain(*src.brain);
	return *this;
};

void Cat::makeSound() const
{
	std::cout << "Meow\n";
};

Cat::~Cat()
{
	std::cout << "Cat distractor\n";
	delete this->brain;
};
