#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		// Cat(const Cat & src);
		Cat & operator=(Cat const &src);
		void makeSound() const;
		~Cat();
};
#endif