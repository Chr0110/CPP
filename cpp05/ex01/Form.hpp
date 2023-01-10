#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				signe;
		int const			grade_to_sign;
		int const			grade_to_exec;

	public:

		class GradeTooHighException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char * what() const throw();
		};

		Form();
		Form(std::string const name, int const gradeSigne, int const gradeExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string const get_form_Name() const;
		bool getSigne() const ;
		int get_sign_grade() const;
		int get_exec_grade() const;

		void	beSigned(Bureaucrat &obj);

};


std::ostream &			operator<<( std::ostream & o, Form const & i );
#endif
