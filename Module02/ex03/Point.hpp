#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		Point&	operator=(Point const & rhs);
		bool	operator==(Point const & rhs) const;
		~Point();
		Fixed	getX();
		Fixed	getY();
	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif
