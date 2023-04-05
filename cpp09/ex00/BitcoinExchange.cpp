#include "BitcoinExchange.hpp"


Btc::Btc()
{
	this->fill_map("data.csv");
};
Btc::Btc(std::string name)
{
	if (name != "data.csv")
		this->error();
	this->fill_map(name);
};

Btc::Btc(Btc const & src)
{
	*this = src;
};

Btc &Btc::operator=(Btc const & src)
{
	this->map = src.map;
	return *this;
};

Btc::~Btc()
{

};

void Btc::set_values(std::string date, double value)
{
	this->date = date;
	this->value = value;
};

void Btc::error()
{
	std::cout << "Error\n" << std::endl;
	exit(0);
};

int Btc::parse_date(std::string date)
{
	try
	{
		int year = std::stod(date.substr(0,4));
		int mounth = std::stod(date.substr(5,7));
		int day = std::stod(date.substr(8,10));
		if (!(year >= 2009 && year <= 2022))
			return 1;
		else if (!(mounth >= 1 && mounth <= 12))
			return 1;
		else if (!(day >= 0 && day <= 31))
			return 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return(1);
	}
	return (0);
};
int Btc::parse_value(long double value)
{
	if (value < 0)
		return 1;
	else if (value >= 1000)
		return 2;
	return 0;
}
void Btc::search_value()
{
	std::map<std::string, double>::iterator it;
	std::string output;
	std::string date;
	long double value;
	std::ifstream inputFile("input.txt");
    if (!inputFile.is_open())
		this->error();
	while(getline(inputFile, output))
	{
		date = output.substr(0, 10);
		try
		{
			value = std::stod(output.substr(13));
			std::cout << value << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "";
		}
		if (this->parse_date(date))
			std::cout << "Error: bad input => " << date << std::endl;
		else if (this->parse_value(value) == 1)
			std::cout << "Error: not a positive number." << std::endl;
		else if (this->parse_value(value) == 2)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			it = this->map.lower_bound(date);
			std::cout  << date << " => " << value << " = " << it->second * value << std::endl;
		}
	}
}

void Btc::fill_map(std::string nameee)
{
	std::string output;
	std::string date;
	double value;
	std::ifstream inputFile(nameee);
    if (!inputFile.is_open())
		this->error();
	while(getline(inputFile, output))
	{
		date = output.substr(0, 10);
		try
		{
			value = std::stod(output.substr(11));
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error" << '\n';
			exit(0);
		}
		this->set_values(date, value);
		this->map[this->date] = this->value;
	}
	inputFile.close();
};