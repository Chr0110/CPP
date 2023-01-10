#include "Zombie.hpp"

Zombie::Zombie( std::string name)
{
    this->name = name;
};

Zombie::~Zombie()
{
    std::cout << "the zombie " << this->name << " is destroyed\n";
};

void Zombie::annonce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}