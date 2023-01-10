#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int fixed_point;
		static const int fractional = 8;
	public:
		// constructors
		Fixed();
		Fixed(Fixed const &a);
		Fixed(const int i);
		Fixed(const float f);
		// getter & setter
		int getRawBits(void) const;
		void setRawBits(int const raw);
		// convert
		float toFloat( void ) const;
		int toInt( void ) const;
		// static members
		static	Fixed & min(Fixed &a, Fixed &b);
		static Fixed const & min(Fixed const &a, Fixed const &b);
		static	Fixed & max(Fixed &a, Fixed &b);
		static Fixed const & max(Fixed const &a, Fixed const &b);
		//arithmetic operators
		Fixed	 & operator=(Fixed const & rhs);
		Fixed operator+(Fixed const &src)  const;
		Fixed operator-(Fixed const &src)  const;
		Fixed operator*(Fixed const &src)  const;
		Fixed operator/(Fixed const &src)  const;
		//comparison operators
		bool operator>(Fixed const &src) const;
		bool operator<(Fixed const &src) const;
		bool operator>=(Fixed const &src) const;
		bool operator<=(Fixed const &src) const;
		bool operator==(Fixed const &src) const;
		bool operator!=(Fixed const &src) const;
		////////////////////////////////////
		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		~Fixed();
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif