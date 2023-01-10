#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		// Dog(const Dog & src);
		Dog & operator=(Dog const &src);
		//std::string getType(void) const;
		void makeSound() const;
		~Dog();
};
#endif