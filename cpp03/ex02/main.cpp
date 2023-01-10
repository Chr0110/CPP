#include "FragTrap.hpp"
int main ()
{
	FragTrap Aa("MEHDI"), Bb("med");

	std::cout << "Aa.name = " << Aa.getName() << std::endl;
	std::cout << "Bb.name = " << Bb.getName() << std::endl;


	Bb = Aa;
	FragTrap Cc(Bb);
	std::cout << "Aa.name = " << Aa.getName() << std::endl;
	std::cout << "Bb.name = " << Bb.getName() << std::endl;
	std::cout << "C.name = " << Cc.getName() << std::endl;
	std::cout << "Aa.name = " << Aa.getName() << std::endl;
	Bb.highFivesGuys();
	std::cout << "---------------------------------------------------\n";
	ScavTrap A("MEHDI"), B("med");

	std::cout << "A.name = " << A.getName() << std::endl;
	std::cout << "B.name = " << B.getName() << std::endl;


	B = A;
	ScavTrap C(B);
	std::cout << "A.name = " << A.getName() << std::endl;
	std::cout << "B.name = " << B.getName() << std::endl;
	std::cout << "C.name = " << C.getName() << std::endl;
	std::cout << "A.name = " << A.getName() << std::endl;
	B.guardGate();
	return 0;
}