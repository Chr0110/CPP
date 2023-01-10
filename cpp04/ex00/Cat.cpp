#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat constractor\n";
    this->type = "Cat";
};

Cat::Cat(std::string type)
{
    std::cout << "Parametrized Cat constractor\n";
    this->type = type;
};

// Cat::Cat(Cat const &cat)
// {
//     std::cout << "Cat copy constractor\n";
//     *this = cat;
// 	return;
// };

Cat & Cat::operator=(Cat const &src)
{
    this->type = src.type;
    return *this;
};

void Cat::makeSound() const
{
    std::cout << "Meow\n";
};

Cat::~Cat()
{
    std::cout << "Cat distractor\n";
}
