#include "Contact.hpp"
#include "PhoneBook.hpp"
void add_to_contact(PhoneBook *pn)
{
	Contact ct;
	std::string input;

	std::cout << "First name: \n";
	std::getline(std::cin, input);
	ct.setfirst_name(input);
	std::cout << "Last name: \n";
	std::getline(std::cin, input);
	ct.setlast_name(input);
	std::cout << "Nickname: \n";
	std::getline(std::cin, input);
	ct.setnickname(input);
	std::cout << "Phone: \n";
	std::getline(std::cin, input);
	ct.setphone(input);
	std::cout << "Secret: \n";
	std::getline(std::cin, input);
	ct.setsercet(input);
	if (ct.getfirst_name().size() > 0 && ct.getlast_name().size() > 0 && ct.getnickname().size() > 0 && ct.getphone().size() > 0 && ct.getsecret().size() > 0)
	{
		(*pn).set_contact(ct);
	}
}

int main ()
{
	PhoneBook pn;
	Contact ct;
	while(1)
	{
		std::string input;
		std::cout << "Choose one of there cmds: {ADD | SEARCH | EXIT} \n";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			add_to_contact(&pn);
		}
		else if (input == "SEARCH")
		{
			pn.show_contacts(&ct);
		}
		else if (input == "EXIT")
		{
			return 0;
		}
	}
}