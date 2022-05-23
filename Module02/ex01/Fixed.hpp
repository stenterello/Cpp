#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_n;
		static const int	_nbits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif
