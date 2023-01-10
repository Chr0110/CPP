#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat &		operator=( Bureaucrat const & rhs );
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		std::string const getName() const;

		int getGrade() const;
		void increment_grade();
		void decrement_grade();
		int	signForm(AForm &form);
		void executeForm(AForm const & form);
	private:
		std::string const name;
		int grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif