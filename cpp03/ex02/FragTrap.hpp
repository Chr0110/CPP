#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
    	FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);
		std::string getName() const;
		void highFivesGuys(void);
};

#endif
