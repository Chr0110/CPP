#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat & cat);
		Cat & operator=(Cat const &src);
		void makeSound() const;
		Brain getBrain();
		~Cat();
	private:
		Brain *brain;
};
#endif