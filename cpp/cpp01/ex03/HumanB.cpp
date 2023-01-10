#include "HumanB.hpp"

HumanB::HumanB( std::string name)
:name(name) 
{
};
HumanB::~HumanB()
{
};
void HumanB::setWeapon(Weapon &wae) // why it's working with the references even we declare it pointer
{
    this->weaponnn = &wae;
};

void HumanB::attack()
{
    if (this->weaponnn->getType() != "" && this->weaponnn != NULL )
    {
        std::cout << this->name << " attacks with their " << this->weaponnn->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " has no weapon !!" << std::endl;
    }
};
