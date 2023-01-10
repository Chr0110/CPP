#include "Zombie.hpp"

void randomChump(std::string name)
{
    //create a zombie the the zombie annonced its self (STACK)
    Zombie zmb(name);
    zmb.annonce();
}