#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor of FragTrap called" << std::endl;
	this->Name = "Name";
	this->Hit_point = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
};
FragTrap::FragTrap(std::string name) //
{
	std::cout << "Parametrized FragTrap constractor\n";
	this->Hit_point = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Name = name;
};

FragTrap::~FragTrap()
{
	std::cout << "This is FragTrap distractor\n";
};

void FragTrap::takeDamage(unsigned int amount)
{
	this->Energy_points = this->Energy_points - 1;
	this->Attack_damage = this->Attack_damage + amount;
	this->Hit_point = this->Hit_point - amount;
	return ;
};

void FragTrap::attack(const std::string& target)
{
	if (this->Energy_points > 0)
	{
		FragTrap::takeDamage(1);
		std::cout << "FragTrap "<< this->Name <<" attacks "<< target <<" causing 1 point of damage!\n";
	}
	else
	{
		std::cout << "Sorry can't do anything\n";
	}
};

void FragTrap::highFivesGuys()
{
    std::cout << "Positive high fives request\n";
};
std::string FragTrap::getName() const{

	return this->Name;
}