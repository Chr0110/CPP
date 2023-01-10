/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murasaki <murasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:33:53 by mabdelba          #+#    #+#             */
/*   Updated: 2023/01/08 01:04:39 by murasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default destructor
Fixed::Fixed(): fixed_point(0){

	// std::cout << "Default constructor called" << std::endl;
	return;
}

//copy constructor

Fixed::Fixed(Fixed const &src){

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

// int constructor

Fixed::Fixed(int const n){
	
	// std::cout << "Int constructor called" << std::endl;
	this->fixed_point= (n << fractional);
	return;
}

// float constructor

Fixed::Fixed(float const f)
{
	// std::cout << "Float constructor called" << std::endl;
		this->fixed_point= int(roundf(f * (1 << fractional)));
}

// assignement operator

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point= rhs.fixed_point;
	return *this;
}

// getter

int	Fixed::getRawBits(void) const{
	
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

// setter

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point= raw;
}

// member functions

float Fixed::toFloat(void) const{

	return float(this->fixed_point) / (1 << fractional);
}

int Fixed::toInt(void) const{
	
	return (this->fixed_point>> fractional);
}

// ostream operator

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

// comparison operators

bool Fixed::operator>(Fixed const &src) const{
	
	if(this->fixed_point> src.fixed_point)
		return true;
	else
		return false;
}

bool Fixed::operator<(Fixed const &src) const{
	
	if(this->fixed_point< src.fixed_point)
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const &src) const{
	
	if(this->fixed_point>= src.fixed_point)
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const &src) const{
	
	if(this->fixed_point<= src.fixed_point)
		return true;
	else
		return false;
}

bool Fixed::operator==(Fixed const &src) const{
	
	if(this->fixed_point== src.fixed_point)
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const &src) const{
	
	if(this->fixed_point!= src.fixed_point)
		return true;
	else
		return false;
}

//arithmetic operators

Fixed Fixed::operator+(Fixed const &src)  const{

	return Fixed(this->fixed_point+ src.fixed_point);
}

Fixed Fixed::operator-(Fixed const &src)  const{

	return Fixed(this->fixed_point- src.fixed_point);
}

Fixed Fixed::operator*(Fixed const &src)  const{
	
	Fixed tmp;

	tmp.fixed_point = this->fixed_point* src.fixed_point>> fractional;
	return tmp;
}

Fixed Fixed::operator/(Fixed const &src)  const{
	
	Fixed tmp;

	tmp.fixed_point = (this->fixed_point* (1 << fractional)/ src.fixed_point);
	return tmp;
}

//increment/decrement operators

Fixed & Fixed::operator++(void)
{
	this->fixed_point+= 1;
	return *this;
}

Fixed & Fixed::operator--(void)
{
	this->fixed_point-= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fixed_point+= 1;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->fixed_point-= 1;
	return tmp;
}

//static members

Fixed & Fixed::min(Fixed &a, Fixed &b){
	
	if(a.fixed_point< b.fixed_point)
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b){
	
	if(a.fixed_point> b.fixed_point)
		return a;
	else
		return b;
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b){
	
	if(a.fixed_point< b.fixed_point)
		return a;
	else
		return b;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b){
	
	if(a.fixed_point> b.fixed_point)
		return a;
	else
		return b;
}

// Destructor

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return;
}