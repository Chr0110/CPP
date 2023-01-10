#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &dog);
		Dog & operator=(Dog const &src);
		void makeSound() const;
		~Dog();
	private:
		Brain *brain;
};
#endif