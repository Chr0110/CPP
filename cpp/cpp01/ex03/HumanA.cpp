#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon)
:name(name), weaponnn(weapon) 
{
};

HumanA::~HumanA()
{
};

void HumanA::attack()
{
	if (weaponnn.getType() != "")
	{
		std::cout << this->name << " attacks with their " << this->weaponnn.getType() << std::endl;
	}
	else
	{
		std::cout << this->name << "this man has no way to be unarmed\n";
	}
}