#include "RPN.hpp"

int main (int ac, char **av)
{
	Rpn rpn;
	if (ac == 2)
	{
		rpn.input = av[1];
		rpn.parse_input();
		rpn.fill_map();
	}
	return 0;
}