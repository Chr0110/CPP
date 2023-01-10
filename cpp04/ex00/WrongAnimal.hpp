# ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		// WrongAnimal(const WrongAnimal &src); 
		WrongAnimal & operator=(WrongAnimal const &src);
		std::string getType(void) const;
		void makeSound() const;
		~WrongAnimal();
};
#endif