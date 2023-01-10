#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:
		ClapTrap();  //Canonical
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(std::string name); 
		ClapTrap( ClapTrap const &src ); //Canonical
		~ClapTrap();  //Canonical

		ClapTrap &		operator=( ClapTrap const & rhs ); //Canonical

		std::string getName() const;

	private:
		std::string Name;
		int Hit_point;
		int Energy_points;
		int Attack_damage;
};

#endif