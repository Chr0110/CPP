#include "File.hpp"

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::string arg2 = av[2];
		std::string arg3 = av[3];
		int arg2_size = arg2.size();
		int arg3_size = arg3.size();
		File file(av[1]);
		std::ifstream in(file.getfilename());
		if (in.fail())
		{
			std::cerr << "Error opening file!" << std::endl;
		}
		else if (in.bad())
		{
			std::cerr << "Error with file stream!" << std::endl;
		}
		else
		{
			std::ofstream out(file.getfilename2());
			out << "This is a new file." << std::endl;
			std::string line;
			while (getline(in, line))
			{
				size_t pos = line.find(av[2]);
				std::cout << std::string::npos<< std::endl;
				if (pos != std::string::npos) {
					line.erase(pos, arg2_size);
					line.insert(pos, arg3);
				}
				out << line << std::endl;
			}
		}
	}
	return 0;
}
