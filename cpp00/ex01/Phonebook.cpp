#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
: index(0)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::set_contact(Contact contact)
{
	this->contact[this->index] = contact;
	this->index = this->index + 1;
	if (this->index == 8)
		this->index = 0;
}

int PhoneBook::get_size(void)
{
	int i = 0;
	while (PhoneBook::contact[i].getfirst_name().size() != 0)
		i++;
	return i;
}
void PhoneBook::show_contacts(void)
{
	int i;
	char index;
	// index = 0;
	i = 0;
	this->size = this->get_size();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right<< "index";
	std::cout << "│" << std::setw(10) << std::right<< "first name";
	std::cout << "│" << std::setw(10) << std::right<< "last name";
	std::cout << "│" << std::setw(10) << std::right<< "nickname" << "│" << std::endl;
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	while (i < this->size)
	{
		std::cout << "│" << std::setw(10) << std::right<< i;
		std::cout << "│" << std::setw(10) << std::right<< this->contact[i].getfirst_name();
		std::cout << "│" << std::setw(10) << std::right<< this->contact[i].getlast_name();
		std::cout << "│" << std::setw(10) << std::right<< this->contact[i].getnickname() << "│" << std::endl;
		i++;
	}
	if (this->get_size() > 0)
	{
		std::cout << "please enter an index of a contact for more details:" << std::endl;
		std::cin >> index;
		if (isdigit(index))
		{
			if (index >= '0' && index <= '8')
			{
				int j = index + 48;
				std::cout << "First name :" << this->contact[j].getfirst_name() << std::endl;
				std::cout << "Last name :" << this->contact[j].getlast_name() << std::endl;
				std::cout << "Nickname :" << this->contact[j].getnickname() << std::endl;
				std::cout << "Phone :" << this->contact[j].getphone() << std::endl;
				std::cout << "Secret :" << this->contact[j].getsecret() << std::endl;
			}
			else
			{
				std::cout << "that's out of the range we have\n";
			}
		}
		else
		{
			std::cout << "input invalid\n";
		}
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // MORE RESEARCHES PLEASE
}