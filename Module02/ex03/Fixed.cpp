#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = n;
	this->_n <<= this->_nbits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = (int)(roundf(f * (1 << this->_nbits)));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs._n;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_n / (float)(1 << this->_nbits));
}

int	Fixed::toInt(void) const
{
	return (this->_n >> this->_nbits);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed	next(*this);

	next.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (next);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed	next(*this);

	next.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (next);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed	next(*this);
	long	f;
	long	s;

	f = (long)this->getRawBits();
	s = (long)rhs.getRawBits();
	next.setRawBits((f * s) / (1 << Fixed::_nbits));
	return (next);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed	next(*this);

	next.setRawBits(this->getRawBits() / rhs.getRawBits());
	return (next);
}

Fixed	Fixed::operator++(void)
{
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator--();
	return (tmp);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed const	&Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const	&Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

std::ostream&	operator<<(std::ostream& o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
