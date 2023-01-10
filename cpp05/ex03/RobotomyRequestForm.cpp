#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): AForm("Form", 75, 45), target("Administration")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): AForm(src),target(src.target)
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string std):AForm("Form", 75, 45), target(std)
{
	
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->target = rhs.target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & o) const
{
	if (!this->getSigne())
		throw RobotomyRequestForm::FormNotSigned();
	if (this->get_exec_grade() < o.getGrade())
		std::cout << "the robotomy failed\n";
	else
	{
		std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
	}
}

/* ************************************************************************** */