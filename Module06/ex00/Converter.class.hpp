/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:02:10 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 17:40:11 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <iomanip>
# include <cfloat>

class Converter
{
	private:
		bool	_char_overflow;
		bool	_int_overflow;
		bool	_float_overflow;
		bool	_double_overflow;
		bool	_inf;
		bool	_minus_inf;
		bool	_nan;
		double	_converted;
	public:
		Converter();
		Converter(Converter const & src);
		Converter&	operator=(Converter const & rhs);
		~Converter();
		void	defineInfinite(std::string s);
		void	defineOverflow(std::string s);
		void	strToChar();
		void	strToInt();
		void	strToFloat();
		void	strToDouble();
};

#endif 