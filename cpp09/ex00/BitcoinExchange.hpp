/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eradi- <eradi-@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:38:50 by eradi-            #+#    #+#             */
/*   Updated: 2023/03/26 07:27:30 by eradi-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class Bet
{
    private:
        std::map<int, std::string> b_value;
		std::string file_name;
    public:
		Bet();
		Bet(std::string name);
		Bet(const Bet &src);
		Bet & operator=(Bet const &src);
		void fill_map();
		void fill_map(std::string name);
		int check_date(std::string date);
		int check_value(double value);
		std::string create_date(std::string line, char delim);
		~Bet();
};

#endif