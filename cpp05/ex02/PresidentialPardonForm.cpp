#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): AForm("Form", 75, 45), target("Administration")
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): AForm(src),target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & o) const
{
	if (!this->getSigne())
		throw PresidentialPardonForm::FormNotSigned();
	if (this->get_exec_grade() < o.getGrade())
		std::cout << "the robotomy failed\n";
	else
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

/* ************************************************************************** */

