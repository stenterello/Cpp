#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& rhs);
		virtual ~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int					_n;
		static const int	_nbits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif
