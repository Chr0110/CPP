#include "Zombie.hpp"

int main (void)
{
    std::string name;
    Zombie *zombie;
    Zombie zombie1;
    int number;

    std::cout << "how much zombies u wanna creat mate?? \n";
    std::cin >> number;
    zombie1.set_number(number);

    std::cout << "what is the name of your zombies\n";
    std::cin >> name;
    zombie = zombieHorde(zombie1.get_number(), name);
    zombie->annonce(zombie1.get_number());
    delete [] zombie; //we use the [] to delete an array of classes (delete == free)
    return 0;
}