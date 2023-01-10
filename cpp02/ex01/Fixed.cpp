#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
	return ;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	// std::cout << i << std::endl;
	this->fixed_point = (i << this->fractional);
	return ;
}
Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = int(roundf(f * (1 << this->fractional)));
	return ;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	std::cout << "Copy assignment operator called\n";
	// getRawBits();
	this->fixed_point = a.fixed_point;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"<< std::endl;
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
   return static_cast<float>(this->fixed_point) / (1 << 8);
}

int Fixed::toInt(void) const
{
	int i = this->fixed_point / (1 << 8);
	return i;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}