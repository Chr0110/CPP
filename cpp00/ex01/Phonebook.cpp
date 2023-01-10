#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

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

int PhoneBook::get_size(Contact ct)
{
	int i = 0;
	while (PhoneBook::contact[i].getfirst_name().size() != 0)
		i++;
	return i;
}
void PhoneBook::show_contacts(Contact *ct)
{
	int i;
	int index;
	index = 0;
	i = 0;
	this->size = this->get_size((*ct));
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
	if (this->get_size((*ct)) > 0)
	{
		std::cout << "please enter an index of a contact for more details:" << std::endl;
		std::cin >> index;
		if (index > this->get_size((*ct)))
		{
			std::cout << "that's out of the range we have\n";
		}
		else
		{
			std::cout << "First name :" << this->contact[index].getfirst_name() << std::endl;
			std::cout << "Last name :" << this->contact[index].getlast_name() << std::endl;
			std::cout << "Nickname :" << this->contact[index].getnickname() << std::endl;
			std::cout << "Phone :" << this->contact[index].getphone() << std::endl;
			std::cout << "Secret :" << this->contact[index].getsecret() << std::endl;
		}
	}
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // MORE RESEARCHES PLEASE
}