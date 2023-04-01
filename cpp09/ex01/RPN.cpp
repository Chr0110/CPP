#include "RPN.hpp"

Rpn::Rpn()
{
	this->input = "5 5 *";
};

Rpn::Rpn(std::string input)
{
	this->input = input;
};

Rpn::Rpn(const Rpn & src)
{
	*this = src;
	return;
};
Rpn &Rpn::operator=( Rpn const & rpn )
{
	this->input = rpn.input;
	return *this;
};

Rpn::~Rpn()
{
}

void Rpn::fill_map()
{
	this->result = 0;
	int i = 0;
	while (this->input[i])
	{
		if (isdigit(this->input[i]))
		{
			stack.push(this->input[i] - '0');
			i++;
		}
		else if (this->input[i] == '+' || this->input[i] == '-' || this->input[i] == '*' || this->input[i] == '/') 
		{
			this->second = stack.top();
			stack.pop();
			this->first = stack.top();
			stack.pop();
			switch (this->input[i])
			{
			case '+':
				this->result = this->first + this->second;
				break;
			case '-':
				this->result = this->first - this->second;
				break;
			case '*':
				this->result = this->first * this->second;
				break;
			case '/':
				this->result = this->first / this->second;
				break;
			}
			stack.push(this->result);
			i++;
		}
		else if (this->input[i] == ' ')
			i++;
	}
	std::cout << this->result << std::endl;
}

void Rpn::error()
{
	std::cerr << "Error\n";
	exit(0);
}

int Rpn::issign(char c)
{
	if (c != '*' && c != '+' && c != '-' && c != '/')
		return (0);
	return (1);
}

void Rpn::parse_input()
{
	int j = 4;
	int i = this->input.size();
	if (i < 5)
		this->error();
	else if (!isdigit(this->input[0]) || this->input[1] != ' ' || !isdigit(this->input[2]) || this->input[3] != ' ')
		this->error();
	while (j < i)
	{
		if (this->input[j] && this->issign(this->input[j]))
			j += 4;
		else
			this->error();
	}
	j = 5;
	while (j < i)
	{
		if (this->input[j] && this->input[j] == ' ')
			j += 2;
		else
			this->error();
	}
	j = 6;
	while (j < i)
	{
		if (this->input[j] && isdigit(this->input[j]))
			j += 4;
		else
			this->error();
	}
}