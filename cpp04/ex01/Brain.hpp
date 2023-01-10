#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(std::string idea);
		Brain( Brain const & src );
		std::string getIdeas(int i);
		~Brain();
		Brain &		operator=( Brain const & rhs );
	private:
		std::string ideas[100];
}; 

#endif