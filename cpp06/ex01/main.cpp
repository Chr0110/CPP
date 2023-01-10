#include <iostream>
#include <string>

//definition of serialize and the difference between the 2 kind of casting, static and reinterpret

struct Data{
	int i;
};

uintptr_t serialize(Data* ptr)
{
   return reinterpret_cast<std::uintptr_t>(ptr);
};

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
int main()
{
	Data d;

	d.i = 8;
	std::uintptr_t u = serialize(&d);
	Data *data = deserialize(u);

	std::cout << data->i << std::endl;
	return 0;
}