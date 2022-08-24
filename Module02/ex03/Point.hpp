/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:44:01 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 12:44:39 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		virtual ~Point();
		Point&	operator=(Point const & rhs);
		bool	operator==(Point const & rhs) const;
		Fixed	getX();
		Fixed	getY();
};

#endif
