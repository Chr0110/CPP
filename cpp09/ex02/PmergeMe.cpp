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
	try
	{
		this->numbers_vec.push_back(std::stoi(input));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		this->error();
	}
};

void	PmergeMe::set_set(std::string input)
{
	try
	{
		this->numbers_set.insert(std::stoi(input));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		this->error();
	}
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
};

void PmergeMe::push_input(char **av)
{
	int i = 0;
	int size = this->numbers_vec.size();
	if (size > 0)
	{
		while(i < size)
		{
			this->numbers_vec.pop_back();
			i++;
		}
	}
	i = 1;
	while (av[i])
	{
		this->set_vec(av[i]);
		this->set_set(av[i]);
		i++;
	}
}

void PmergeMe::print_input()
{
	int i = 0;
	int j = this->size;
	struct timeval start, end;
	struct timeval start2, end2;
    gettimeofday(&start, NULL);
    std::sort(this->numbers_vec.begin(), this->numbers_vec.end());
	gettimeofday(&end, NULL);
	long seconds = end.tv_sec - start.tv_sec;
    long useconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds + useconds / 1000000.0;
	
	gettimeofday(&start2, NULL);
    std::set<int> sorted_set(numbers_set.begin(), numbers_set.end());
	gettimeofday(&end2, NULL);
	long seconds2 = end2.tv_sec - start2.tv_sec;
    long useconds2 = end2.tv_usec - start2.tv_usec;
    double elapsed2 = seconds2 + useconds2 / 1000000.0;
	if (this->size > 5)
		j = 5;
	while (i < j)
	{
		std::cout << this->get_vec(i) << " ";
		i++;
	}
	std::cout << "\n";
    std::cout << "Time to process a range of " << this->size << " elements with std::[..] : "<< elapsed << "us" << std::endl;
    std::cout << "Time to process a range of " << this->size << " elements with std::[..] : "<< elapsed2 << "us" << std::endl;
}