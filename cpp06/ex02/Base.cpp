#include "Base.hpp"

Base::~Base()
{
}

Base * generate(void)
{
	Base *object = new B;
	return object;
}
void identify(Base* p)
{
	std::cout << "the type of p is : ";
	p = generate();
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
	{
		return ;
	}
	
}
void identify(Base& p)
{
	std::cout << "the type of p is : ";
	try 
	{
		(dynamic_cast<A&>(p));
		std::cout << "A\n";
	}
	catch (std::bad_cast & bc) {}
	try
	{
		(dynamic_cast<B&>(p));
		std::cout << "B\n";
	}
	catch (std::bad_cast & bc) {}
	try
	{
		(dynamic_cast<C&>(p));
		std::cout << "C\n";
	}
	catch (std::bad_cast & bc) {}
}