#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac > 2)
	{
		int i = 1;
		PmergeMe pm;
		pm.size = ac - 1;
		while(av[i])
		{
			pm.parse_input(av[i]);
			i++;
		}
		// i = 1;
		// while(av[i])
		// {
		// 	std::cout << av[i] << " ";
		// 	i++;
		// }
		// std::cout << "\n";
		pm.print_input();	
	}
	return (0);
}
