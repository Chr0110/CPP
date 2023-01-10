#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constractor\n";
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea";
	}
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain copy constractor\n";
};

std::string Brain::getIdeas(int index)
{
    return this->ideas[index];
};

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
}

Brain::~Brain()
{
	std::cout << "Brain distractor\n";
}


Brain &	Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}
