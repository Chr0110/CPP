#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constractor\n";
    this->type = "WrongCat";
};

WrongCat::WrongCat(std::string type)
{
    std::cout << "Parametrized WrongCat constractor\n";
    this->type = type;
};

// WrongCat::WrongCat(WrongCat const &wrongcat)
// {
//     std::cout << "WrongCat copy constractor\n";
//     *this = wrongcat;
// 	return;
// };

WrongCat & WrongCat::operator=(WrongCat const &src)
{
    this->type = src.type;
    return *this;
};

void WrongCat::makeSound() const
{
    std::cout << "Meow\n";
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat distractor\n";
}
