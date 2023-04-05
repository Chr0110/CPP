#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac > 2)
	{
		int i = 1;
		PmergeMe pm;
		pm.size = ac - 1;
		int size = ac - 1;
		while(av[i])
		{
			pm.parse_input(av[i]);
			i++;
		}
		pm.push_input(av);
		i = 1;
		if (ac > 6)
		{
			size = 6;
			while(i < size)
			{
				std::cout << av[i] << " ";
				i++;
			}
		}
		else if (ac < 6)
		{
			while(i <= size)
			{
				std::cout << av[i] << " ";
				i++;
			}
		}
		std::cout << "\n";
		pm.print_input(av);
	}
	return (0);
}
