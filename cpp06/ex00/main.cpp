#include "convert.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int input_is_int = 0;
		double input_is_double = 0;
		float input_is_float = 0;
		bool is_int = true;
		std::string str = av[1];
		int input_size = str.size();
		if (str == "nan" || str == "nanf")
		{
			show_result_as_nan();
			return 0;
		}
		if (str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
		{
			show_result_as_inf();
			return 0;
		}
		if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
		{
			if (str.size() > 1)
			{
				std::cout << "Invalid input" << std::endl;
				return 0;
			}
			else
			{
				show_result_as_char(str);
				return 0;
			}
		}
		while (i < input_size)
		{
			if (!(std::isdigit(str[i])))
			{
				is_int = false;
				break;
			}
			i++;
		}
		if (is_int)
		{
			input_is_int = std::atoi(str.c_str());
			show_result_as_int(input_is_int);
			return 0;
		}
		else
		{
			i = 0;
			int p = 0;
			int f = 0;
			while (i < input_size)
			{
				if (!(std::isdigit(str[i])))
				{
					if (str[i] == '.')
						p++;
					else if (str[i] == 'f')
						f++;
					else
					{
						std::cout << "Invalid inputttt\n";
						return 0;
					}
				}
				i++;
			}
			if (f > 1 || p > 1 || i != input_size)
			{
				std::cout << "Invalid input\n";
				return 0;
			}
			else if (f == 0)
			{
				input_is_double = std::stod(str);
				show_result_as_double(input_is_double);
			}
			else
			{
				input_is_float= std::stof(str);
				show_result_as_float(input_is_float);
			}
		}
	}
	return 0;
}