#include "Zombie.hpp"

int main (void)
{
	std::string name;
	Zombie *zombie1;

	std::cout << "enter a zombie name (stack): \n";
	std::cin >> name;
	randomChump(name); //USE IT DIRECTELY 

	std::cout << "enter a zombie name (heap): \n";
	std::cin >> name;
	zombie1 = newZombie(name);
	zombie1->annonce(); //USE IT AFTER RETRUN IT BY THE NEWZOMBIE FUNCTION
	delete zombie1;
}