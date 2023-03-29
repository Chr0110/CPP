/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:38:44 by eradi-            #+#    #+#             */
/*   Updated: 2023/03/26 08:25:35 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

Bet::Bet()
{
	fill_map();
}

Bet::Bet(std::string name)
{
	fill_map(name);
}

// void Bet::set_filename(std::string name)
// {
// 	this->file_name = name;
// }

// std::string Bet::get_filename()
// {
// 	return this->file_name;
// }

Bet::~Bet()
{
  
}

void Bet::fill_map()
{
	std::ifstream inputFile("input.txt");
	if (!inputFile.is_open())
		std::cerr << "Error opening file!" << std::endl;
	else
	{
		std::map<std::string, double> btc;
		std::string line;
		while (getline(inputFile, line))
		{
			try
			{
				std::string date = this->create_date(line, ',');
				if (this->check_date(date))
				{
					double value = std::stod(line.substr(11));
					if (this->check_value(value))
					{
						btc[date] = value;
						std::cout << value << std::endl;
					}
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << "Error" <<e.what() << '\n';
			}
		}
		inputFile.close();
	}
}

int Bet::check_date(std::string date)
{
	if (date.size() > 10)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return 0;
	}
	else if (date[4] && date[7])
	return 1;
}

int Bet::check_value(double value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return (0);
	}
	else if (value > 1000)
	{
		std::cerr << "Error:  too large a number" << std::endl;
		return (0);
	}
	return 1;
}

void Bet::fill_map(std::string name)
{
	std::ifstream inputFile(name);
	if (!inputFile.is_open())
		std::cerr << "Error opening file!" << std::endl;
	else
		std::cout << "Wlhta kayn hh\n";
}

std::string Bet::create_date(std::string line, char delim)
{
	std::string date;
	int i;
	i = 0;
	while (line[i])
	{
		if (line[i] == delim)
			break;
		date += line[i];
		i++;
	}
	return date;
}