#include "Base.hpp"

int main()
{
    //definition of serialize and the difference between the 3 kind of casting, static and reinterpret and data_cast 
    Base *base;

	base = generate();
    
   identify(base);
   identify(*base);

    delete base;
	
	return 0;
}