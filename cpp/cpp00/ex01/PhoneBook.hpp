#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[9];
		int index;
		int size;
	public:
		PhoneBook();
		~PhoneBook();
		void show_contacts(Contact *ct);
		void set_contact(Contact ct);
		void set_index();
		int get_size(Contact ct);
};
#endif