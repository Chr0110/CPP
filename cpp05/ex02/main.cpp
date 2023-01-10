#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
int main()
{
	//in this exercice we gonna check if the form signed, if yes, each class gonna execute its exucution on the form after checking the execution grade 
	//dont forget to fix the file name to the target please
	std::cout << "-----------------------------------\n";
	Bureaucrat bur("Mehdi", 1);
	ShrubberyCreationForm shru;
	RobotomyRequestForm robot;
	PresidentialPardonForm president;
	std::cout << "-----------------------------------\n";
	bur.executeForm(shru); // in this case it's normal to show that the form didn't signed yet, cuz the signed it's already false without any change
	std::cout << "-----------------------------------\n";
	bur.signForm(shru); // here the change comes and signed become true or stay false
	std::cout << "-----------------------------------\n";
	bur.executeForm(shru);
	std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	std::cout << "Robotomy test\n";
	std::cout << "-----------------------------------\n";
	bur.executeForm(robot);
	std::cout << "-----------------------------------\n";
	bur.signForm(robot);
	std::cout << "-----------------------------------\n";
	bur.executeForm(robot);
	std::cout << "-----------------------------------\n";
	std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	std::cout << "Presidential test\n";
	std::cout << "-----------------------------------\n";
	bur.executeForm(president);
	std::cout << "-----------------------------------\n";
	bur.signForm(president);
	std::cout << "-----------------------------------\n";
	bur.executeForm(president);
	std::cout << "-----------------------------------\n";
	return (0);
}