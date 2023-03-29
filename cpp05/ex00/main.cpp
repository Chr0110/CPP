#include "Bureaucrat.hpp"

int main (void)
{
	try
	{
		Bureaucrat bur("mehdi", -10000);
		bur.increment_grade();
		std::cout << bur;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}