#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac == 2)
	{
		while(av[i] != NULL)
		{
			while(av[i][j] != '\0')
			{
				std::cout << char(toupper(av[i][j]));
				j++;
			}
			j = 0;
			i++;
		}
	}
	else
		std::cout << "INVALID SORRY";
	std::cout << "\n";
	return 0;
}