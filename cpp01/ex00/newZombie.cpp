#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	 //create a zombie and return it to use it outside the scope  (HEAP)
	return (new Zombie(name));
}