#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional;
	public:
		Fixed();
		Fixed(Fixed const &a);
		Fixed &		operator=( Fixed const & rhs );
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};
// std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif