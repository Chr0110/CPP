#ifndef INTERN_HPP
# define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
# include <iostream>
# include <string>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm *makeForm(std::string name, std::string target) const;

};


#endif /* ********************************************************** INTERN_H */