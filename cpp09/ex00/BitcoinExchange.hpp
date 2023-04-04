#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <map>
#include <cstring>
#include <fstream>
#include <string>

class Btc
{
	private:
		std::string date;
		int value;
		std::map<std::string, int> map;
	public:
		Btc();
		Btc(const std::string name);
		Btc(Btc const & src);
		Btc &		operator=( Btc const & rhs );
		~Btc();
		void fill_map(std::string name);
		void set_values(std::string date, int value);
		void search_value(std::string name);
		void error();
};

#endif