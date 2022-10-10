/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:03:38 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 17:42:38 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.class.hpp"

Converter::Converter() : _char_overflow(false), _int_overflow(false), _float_overflow(false), _double_overflow(false),
	_inf(false), _minus_inf(false), _nan(false), _converted(0)
{}

Converter::Converter(Converter const & src)
{
	this->_converted = 0;
	this->_char_overflow = src._char_overflow;
	this->_int_overflow = src._int_overflow;
	this->_float_overflow = src._float_overflow;
	this->_double_overflow = src._double_overflow;
	this->_inf = src._inf;
	this->_minus_inf = src._minus_inf;
	this->_nan = src._nan;
}

Converter&	Converter::operator=(Converter const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_converted = 0;
	this->_char_overflow = rhs._char_overflow;
	this->_int_overflow = rhs._int_overflow;
	this->_float_overflow = rhs._float_overflow;
	this->_double_overflow = rhs._double_overflow;
	this->_inf = rhs._inf;
	this->_minus_inf = rhs._minus_inf;
	this->_nan = rhs._nan;
	return (*this);
}

Converter::~Converter() {}

void	Converter::defineInfinite(std::string s)
{
	if (!s.compare("inf"))
		this->_inf = true;
	else if (!s.compare("-inf"))
		this->_minus_inf = true;
	else if (!s.compare("nan"))
		this->_nan = true;
}

void	Converter::defineOverflow(std::string s)
{
	if (this->_inf || this->_minus_inf || this->_nan)
		return ;
	this->_converted = std::strtod(s.c_str(), NULL);
	if (this->_converted < CHAR_MIN || this->_converted > CHAR_MAX)
		this->_char_overflow = true;
	if (this->_converted < INT_MIN || this->_converted > INT_MAX)
		this->_int_overflow = true;
	if (this->_converted < FLT_MIN || this->_converted > FLT_MAX)
		this->_float_overflow = true;
	if (this->_converted < DBL_MIN || this->_converted > DBL_MAX)
		this->_double_overflow = true;
}

void	Converter::strToChar()
{
	if (this->_char_overflow || this->_nan || this->_inf || this->_minus_inf)
		std::cout << "char: Impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(this->_converted)))
		std::cout << "char: Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->_converted) << "'" << std::endl;
}

void	Converter::strToInt()
{
	if (this->_int_overflow || this->_nan || this->_inf || this->_minus_inf)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(this->_converted) << std::endl;
}

void	Converter::strToFloat()
{
	if (this->_float_overflow)
		std::cout << "float: Impossible" << std::endl;
	else if (!this->_inf && !this->_minus_inf && !this->_nan)
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_converted) << "f" << std::endl;
	else if (this->_inf)
		std::cout << "float: inf" << "f" << std::endl;
	else if (this->_minus_inf)
		std::cout << "float: -inf" << "f" << std::endl;
	else if (this->_nan)
		std::cout << "float: nan" << "f" << std::endl;
}

void	Converter::strToDouble()
{
	if (this->_double_overflow)
		std::cout << "double: Impossible" << std::endl;
	else if (!this->_inf && !this->_minus_inf && !this->_nan)
		std::cout << "double: " << this->_converted << std::endl;
	else if (this->_inf)
		std::cout << "float: inf" << std::endl;
	else if (this->_minus_inf)
		std::cout << "float: -inf" << std::endl;
	else if (this->_nan)
		std::cout << "float: nan" << std::endl;
}