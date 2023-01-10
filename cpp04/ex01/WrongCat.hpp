#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
        WrongCat(std::string name);
		// WrongCat(const WrongCat & src);
		WrongCat & operator=(WrongCat const &src);
		void makeSound() const;
		virtual ~WrongCat();
};
#endif