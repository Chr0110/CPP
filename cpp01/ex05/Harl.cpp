#include "Harl.hpp"

Harl::Harl()
{
};
Harl::~Harl()
{
};


void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \n";
}

void Harl::error(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! \n";
}

void Harl::info(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void Harl::warning(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    int i = 0;
    func_t functions[] = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    std::string func_name[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    while(i < 4 && func_name[i] != level)
    {
        i++;
    }
    (this->*functions[i])();
}