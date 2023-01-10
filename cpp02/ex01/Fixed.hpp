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
		Fixed();
		Fixed(Fixed const &a);
		Fixed(const int i);
		Fixed(const float f);
		Fixed &		operator=( Fixed const & rhs );
		int getRawBits(void) const;
		void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
		~Fixed();
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif