#include "Contact.hpp"
#include "PhoneBook.hpp"


std::string Contact::getfirst_name()
{
    return this->first_name;
}
std::string Contact::getlast_name()
{
    return this->last_name;
}
std::string Contact::getnickname()
{
    return this->nickname;
}
std::string Contact::getphone()
{
    return this->phone;
}
std::string Contact::getsecret()
{
    return this->secret;
}
void Contact::setfirst_name(std::string string)
{
    if (string.size() > 9)
    {
        this->first_name = string.substr(0, 9) + ".";
        return;
    }
    else
    {
        this->first_name = string;
        return;
    }
}
void Contact::setlast_name(std::string string)
{
    if (string.size() > 9)
    {
        this->last_name = string.substr(0, 9) + ".";
        return;
    }
    else
    {
        this->last_name = string;
        return;
    }
}
void Contact::setphone (std::string string)
{
    if (string.size() > 9)
    {
        this->phone = string.substr(0, 9) + ".";
        return;
    }
    else
    {
        this->phone = string;
        return;
    }
}
void Contact::setnickname (std::string string)
{
    if (string.size() > 9)
    {
        this->nickname = string.substr(0, 9) + ".";
        return;
    }
    else
    {
        this->nickname = string;
        return;
    }
}
void Contact::setsercet(std::string string)
{
    if (string.size() > 9)
    {
        this->secret = string.substr(0, 9) + ".";
        return;
    }
    else
    {
        this->secret = string;
        return;
    }
}
