#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
	this->fractional = 8;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point = 0;
	this->fractional = 8;
	*this = a;
}


Fixed &Fixed::operator=(Fixed const &a)
{
	std::cout << "Copy assignment operator called\n";
	getRawBits();
	this->fixed_point = a.fixed_point;
	this->fractional = a.fractional;
	return *this;
}


void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->fixed_point;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed Fixed::operator+(Fixed const &src) const
{
    return Fixed();
}
