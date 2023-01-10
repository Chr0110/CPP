#include "convert.hpp"

void show_result_as_char(std::string std)
{
	std::cout << "char: " << std << std::endl;
	std::cout << "int: " << static_cast<int>(std[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(std[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(std[0]) << ".0" <<std::endl;
};

void show_result_as_int(int i)
{
	if ((i >= 0 && i <=31) || i == 127 || i > 128)
		std::cout << "char:  Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	float fl = static_cast<float>(i);
	std::cout << "float: " << fl << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" <<std::endl;
};


void show_result_as_float(float f)
{
	if ((f >= 0 && f <=31) || f == 127 || f > 128)
		std::cout << "char:  Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << ".0" <<std::endl;
};

void show_result_as_double(double d)
{
	if ((d >= 0 && d <=31) || d == 127 || d > 128)
		std::cout << "char:  Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << ".0f"  << std::endl;
	std::cout << "double: " << d << ".0" <<std::endl;
};

void show_result_as_nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void show_result_as_inf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: inff" << std::endl;
	std::cout << "double: inf" << std::endl;
}