#include "Zombie.hpp"

Zombie::Zombie(void)
{
};

void Zombie::set_number(int n)
{
    this->N = n;
};

void Zombie::set_name(std::string name1)
{
    this->name = name1;
};

int Zombie::get_number()
{
    return this->N;
};

void Zombie::annonce(int n)
{
    int i = 0;
    while(i < n)
    {
        std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
        i++;
    }
}
Zombie::~Zombie()
{
    // int i = 0;
    // while (i < this->N)
    // {
        std::cout << "the zombie "<< this->name << " is destroyed\n";
    //     i++;
    // }
    
}