#include "Intern.hpp"


Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}



Intern::~Intern()
{
}



Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	(Intern const)rhs;
	return *this;
}


AForm * Intern::makeForm(std::string  name, std::string  target) const
{
	std::string form[] = {"shrubbery creation", "robotomy request",
						 "presidential pardon"};
	

	int i;
	for(i = 0; i < 3; i++)
	{
		if(name == form[i])
			 break;
	}

	switch (i)
	{
		case 0:
		{
			ShrubberyCreationForm *Shrubbery = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return Shrubbery;
		}
		case 1:
		{
			RobotomyRequestForm *Robotomy = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return Robotomy;
		}
		case 2:
		{
			PresidentialPardonForm *Presidential = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return Presidential;
		}
		default:
		{
			std::cout << "Invalid name !" << std::endl; 
			return NULL;
		}
	}
	
}

