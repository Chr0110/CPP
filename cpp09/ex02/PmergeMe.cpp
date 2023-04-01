#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	for (int i = 10; i < 20; i++)
		this->numbers_set.insert(i);
	for (int i = 10; i < 20; i++)
		this->numbers_vec.push_back(i);
};
PmergeMe::PmergeMe(std::string name)
{
	this->numbers_set.insert(std::stoi(name));
	this->numbers_vec.push_back(std::stoi(name));
};
PmergeMe::PmergeMe( PmergeMe const & src )
{
	*this = src;
	return;
};
PmergeMe & PmergeMe::operator=(PmergeMe const &src)
{
	this->numbers_set = src.numbers_set;
	this->numbers_vec = src.numbers_vec;
	return *this;
};
PmergeMe::~PmergeMe()
{

};

void PmergeMe::error()
{
	std::cout << "Error\n";
	exit(0);
};

void	PmergeMe::set_vec(std::string input)
{
	this->numbers_vec.push_back(std::stoi(input));
	std::cout <<"hhhhh->" << this->numbers_vec[13] << std::endl;
};

void	PmergeMe::set_set(std::string input)
{
	this->numbers_set.insert(std::stoi(input));
};

int PmergeMe::get_vec(int i)
{
	return this->numbers_vec[i];
}
void PmergeMe::parse_input(std::string input)
{
	int i = 0;
	while(input[i])
	{
		if (!isdigit(input[i]))
			this->error();
		i++;
	}
	this->set_vec(input);
	this->set_set(input);
};

void PmergeMe::print_input()
{
	int i = 0;
	while (i < this->size)
	{
		//std::cout << this->get_vec(i) << " ";
		i++;
	}
	std::cout << "\n";
}