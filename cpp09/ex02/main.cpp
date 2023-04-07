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
		pm.push_input(av);
		i = 1;
		while (av[i])
		{
			if (i == 5)
			{
				std::cout << "[...]";
				break;
			}
			std::cout << av[i] << " " ;
			i++;
		}
		std::cout << "\n";
		pm.print_input(av);
	}
	return (0);
}
