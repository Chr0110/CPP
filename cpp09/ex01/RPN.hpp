#ifndef RPN
#define RPN

#include <iostream>
#include <stack>
#include <string>

class Rpn
{
    private:
        std::stack <int> stack;
    public:
        Rpn();
		Rpn(std::string name);
		Rpn( Rpn const & src );
		~Rpn();
		Rpn &		operator=( Rpn const & rhs );
        void parse_input();
        void fill_map();
        void error();
        int issign(char c);
        int first;
        int second;
        int result;
        int sign;
        int intiger;
        std::string input;
};
#endif