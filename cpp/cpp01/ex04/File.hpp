#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>
#include <string>

class File
{
    private:
        std::string filename_1;
        std::string filename_2;
    public:
        File();
        File(const std::string s1);
        ~File();
        std::string getfilename();
        std::string getfilename2();
};
#endif