#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
	this->Name = "Name";
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
};
ClapTrap::ClapTrap(std::string name) //
{
	std::cout << "Parametrized constractor\n";
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	this->Name = name;
};

ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "Copy constractor\n";
	*this = src;
	return;
};

ClapTrap::~ClapTrap()
{
	std::cout << "This is distractor\n";
};

ClapTrap &ClapTrap::operator=( ClapTrap const & clap )
{
	this->Name = clap.Name;
	this->Hit_point = clap.Hit_point;
	this->Attack_damage = clap.Attack_damage;
	this->Energy_points = clap.Energy_points;
	return *this;
};



void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points > 0)
	{
		this->Energy_points = this->Energy_points - 1;
		this->Attack_damage = this->Attack_damage - amount;
		this->Hit_point = this->Hit_point + amount;
		std::cout << "The ClapTrap "<< this->Name << " retrun a point to his Hit points and lose a point from his Attack damage\n";
		std::cout << "His Attack points now are : " << this->Attack_damage << " and his Hit points are: " << this->Hit_point << std::endl;
	}
	return ;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->Energy_points = this->Energy_points - 1;
	this->Attack_damage = this->Attack_damage + amount;
	this->Hit_point = this->Hit_point - amount;
	return ;
}
void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points > 0)
	{
		ClapTrap::takeDamage(1);
		std::cout << "ClapTrap "<< this->Name <<" attacks "<< target <<" causing 1 point of damage!\n";
	}
	else
	{
		std::cout << "Sorry can't do anything\n";
	}
}

std::string ClapTrap::getName() const{

	return this->Name;
}