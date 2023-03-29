#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
int main()
{
	try
	{
		Bureaucrat bur("Mehdi", 1);
		ShrubberyCreationForm shru;
		RobotomyRequestForm robot;
		PresidentialPardonForm president;
		std::cout << std::endl;
		std::cout << "Shrubbery test\n";
		bur.signForm(shru);
		bur.executeForm(shru);
		std::cout << std::endl;
		std::cout << "Robotomy test\n";
		bur.signForm(robot);
		bur.executeForm(robot);
		std::cout << std::endl;
		std::cout << "Presidential test\n";
		bur.signForm(president);
		bur.executeForm(president);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}