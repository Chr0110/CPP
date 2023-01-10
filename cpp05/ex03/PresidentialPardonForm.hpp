#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM
# include <iostream>
# include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src );
		PresidentialPardonForm(std::string std);
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const & executor)  const;
	private:
		std::string target;
};

#endif