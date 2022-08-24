/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:51:59 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 11:53:07 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_n;
		static const int	_nbits = 8;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& rhs);
		virtual ~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif
