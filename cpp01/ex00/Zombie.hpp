# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name1);
    ~Zombie();
    void annonce (void);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif