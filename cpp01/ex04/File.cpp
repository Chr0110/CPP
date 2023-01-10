#include "File.hpp"

File::File()
{
};

File::File(const std::string s1)
{
	this->filename_1 = s1;
	this->filename_2 = s1 + ".replace";
};

File::~File()
{
};

std::string File::getfilename()
{
	return this->filename_1;
};

std::string File::getfilename2()
{
	return this->filename_2;
};