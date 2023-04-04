#ifndef PMERGEME
#define PMERGEME

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <sys/time.h>

class PmergeMe
{
    private:
        std::vector <int> numbers_vec;
        std::set <int> numbers_set;
    public:
        PmergeMe();
		PmergeMe(std::string name);
		PmergeMe( PmergeMe const & src );
		~PmergeMe();
		PmergeMe &	operator=( PmergeMe const & rhs );
        void parse_input(std::string input);
        void error();
        void set_vec(std::string input);
        void set_set(std::string input);
        int get_vec(int i);
        void print_input();
        void push_input(char **av);
        int size;
};
#endif