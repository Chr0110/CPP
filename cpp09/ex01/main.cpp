#include "RPN.hpp"

int main (int ac, char **av)
{
	if (ac > 1)
	{
		std::stack <int> stack;
		int result = 0;
		int i = 0;
		while (av[1][i])
		{
			// printf("%c", av[1][i]);
			if (isdigit(av[1][i]))
			{
				stack.push(av[1][i] - '0');
				i++;
			}
			else if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/') 
			{
				int second = stack.top();
				stack.pop();
				int first = stack.top();
				stack.pop();
				switch (av[1][i])
				{
				case '+':
					result = first + second;
					break;
				case '-':
					result = first - second;
					break;
				case '*':
					result = first * second;
					break;
				case '/':
					result = first / second;
					break;
				}
				stack.push(result);
				i++;
			}
			else if (av[1][i] == ' ')
				i++;
			else
			{
				std::cerr << "Error\n";
				exit(0);
			}
		}
		std::cout << result << std::endl;
		return (0);
	}
	return (0);

}