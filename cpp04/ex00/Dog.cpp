#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog Dconstractor\n";
    this->type = "Dog";
};

Dog::Dog(std::string type)
{
    std::cout << "Parametrized Dog constractor\n";
    this->type = type;
};

// Dog::Dog(const Dog& src)
// {
//     std::cout << "Dog copy constractor\n";
//     *this = src;
// 	return;
// };

Dog & Dog::operator=(Dog const &src)
{
    this->type = src.type;
    return *this;
};

void Dog::makeSound() const
{
    std::cout << "Woof\n";
};

Dog::~Dog()
{
    std::cout << "Dog distractor\n";
};