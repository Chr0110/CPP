#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:
		std::string name;
		class Weapon& weaponnn;
	public:
		HumanA(std::string name1, Weapon &weapon);
		~HumanA();
		void attack(void);
};

#endif