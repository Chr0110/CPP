#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Constructor of ScavTrtap called" << std::endl;
	this->Name = "Name";
	this->Hit_point = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
};
ScavTrap::ScavTrap(std::string name) //
{
	std::cout << "Parametrized ScavTrtap constractor\n";
	this->Hit_point = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->Name = name;
};


ScavTrap::~ScavTrap()
{
	std::cout << "This is ScavTrtap distractor\n";
};

void ScavTrap::takeDamage(unsigned int amount)
{
	this->Energy_points = this->Energy_points - 1;
	this->Attack_damage = this->Attack_damage + amount;
	this->Hit_point = this->Hit_point - amount;
	return ;
};

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy_points > 0)
	{
		ScavTrap::takeDamage(1);
		std::cout << "ScavTrap "<< this->Name <<" attacks "<< target <<" causing 1 point of damage!\n";
	}
	else
	{
		std::cout << "Sorry can't do anything\n";
	}
};

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gatekeeper mode\n";
}
std::string ScavTrap::getName() const{

	return this->Name;
}