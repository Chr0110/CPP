#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Form", 145, 137), target("Administration")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):AForm(src), target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
		this->target = rhs.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & o) const
{
	if (!this->getSigne())
		throw ShrubberyCreationForm::FormNotSigned();
	if (this->get_exec_grade() < o.getGrade())
		std::cout << "the shrubbery failed\n";
	else
	{
		std::ofstream o(this->target + "_Shruberry");
		if (!o.is_open())
		{
            std::cout << "File cannot open" << std::endl;
        	return;
   		}
		std::cout << "Shrubbery's action to : "<< this->target << std::endl;
		o << "\t\t\t       .     .  .      +     .      .          .\n\
            .       .      .     #       .           .   \n\
        .      .         ###            .      .      .   \n\
      .      .   #:. .:####:. .:#  .      .   \n\
          .      .  #### ### ####   .   \n\
       .      #:.    .:# ### #:.    .:#   .        .       .   \n\
  .              ######### #########         .        .   \n\
        .     #:.   #### ### ####   .:#    .       .   \n\
     .     .   ####### ## ## #######                   .   \n\
                . ## ##### ##### ##            .      .   \n\
    .    #:. ...  .:## ### ### ##:.  ... .:#      .   \n\
      .      ####### ## ##### ## #######       .     .   \n\
    .    .      ##### ####### #####     .      .   \n\
            .            000           .     .   \n\
       .         .   .   000     .        .       .   \n\
         \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	}
}