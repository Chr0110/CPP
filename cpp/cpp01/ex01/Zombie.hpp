# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
private:
    std::string name;
    int N;
public:
    Zombie();
    ~Zombie();
    void annonce (int n);
    void set_number(int n);
    int get_number();
    void set_name(std::string name1);
};
Zombie* zombieHorde( int N, std::string name);
#endif