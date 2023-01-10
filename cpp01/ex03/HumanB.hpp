#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		class Weapon *weaponnn;
		std::string name;
	public:
		HumanB(std::string name1);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &waep);
};

#endif