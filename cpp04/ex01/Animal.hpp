# ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		Animal & operator=(Animal const &src);
		std::string getType(void) const;
		virtual void makeSound() const;
		virtual ~Animal();
};
#endif