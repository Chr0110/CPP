#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM
# include <iostream>
# include <string>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string std);
		PresidentialPardonForm(PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const & executor)  const;
	private:
		std::string target;
};

#endif