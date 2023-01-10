#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
	public:	
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);
		std::string getName() const;
		void guardGate();
};
#endif