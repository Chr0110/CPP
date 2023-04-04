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

void Btc::set_values(std::string date, int value)
{
	this->date = date;
	this->value = value;
};

void Btc::error()
{
	std::cout << "Error\n" << std::endl;
	exit(0);
};

void Btc::search_value()
void Btc::fill_map(std::string nameee)
{
	std::string output;
	std::string date;
	int value;
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