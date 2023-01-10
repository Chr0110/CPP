#include "ClapTrap.hpp"

int main ()
{
	// ClapTrap A("MEHDI"), B("med");

	// std::cout << "A.name = " << A.getName() << std::endl;
	// std::cout << "B.name = " << B.getName() << std::endl;


	// B = A;
	// ClapTrap C(B);
	// std::cout << "A.name = " << A.getName() << std::endl;
	// std::cout << "B.name = " << B.getName() << std::endl;
	// std::cout << "C.name = " << C.getName() << std::endl;
	// std::cout << "A.name = " << A.getName() << std::endl;
	// ClapTrap mehdi;
	// mehdi.attack("Monster 1");
	ClapTrap clap("Mehdi");
	clap.attack("Monster 2");
	clap.beRepaired(1);
		clap.attack("Monster 2");
	clap.beRepaired(1);
		clap.attack("Monster 2");
	clap.beRepaired(1);
		clap.attack("Monster 2");
	clap.beRepaired(1);
		clap.attack("Monster 2");
	clap.beRepaired(1);


	return 0;
}