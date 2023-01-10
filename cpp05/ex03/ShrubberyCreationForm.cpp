#include "ShrubberyCreationForm.hpp"
#include <fstream>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Form", 145, 137), target("Administration")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Form", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):AForm(src), target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)  const
{
	if (!this->getSigne())
	{
		throw ShrubberyCreationForm::FormNotSigned();
	}
	if (executor.getGrade() > this->get_exec_grade())
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		std::ofstream o("shit");
		if (!o.is_open())
		{
            std::cout << "File cannot open" << std::endl;
        	return;
   		}
		std::cout << "Shrubbery's action to : "<< this->target << std::endl;
		o << "\t\t\t          ,@@@@@@@,\n\
            ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
        %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
        %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
        `&%\\ ` /%&'    |.|        \\ '|8'\n\
            |o|        | |         | |\n\
            |.|        | |         | |\n\
         \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	}
}