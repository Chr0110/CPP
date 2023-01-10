#include "Harl.hpp"

int main (void)
{
	std::string level;
	Harl	harl;
	std::cout << "Choose a level to help Harl know what gonna do: \n";
	std::cin >> level;
	if (level != "DEBUG" && level != "ERROR" && level != "INFO" && level != "WARNING")
	{
		std::cout << "level not valid.\n";
	}
	else
	{
		harl.complain(level);
	}
	return (0);
}