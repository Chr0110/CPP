#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;
public:

	void setsercet(std::string string);
	void setfirst_name(std::string string);
	void setlast_name(std::string string);
	void setnickname(std::string string);
	void setphone(std::string string);

	std::string getfirst_name();
	std::string getlast_name();
	std::string getnickname();
	std::string getphone();
	std::string getsecret();
};

#endif