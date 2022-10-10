/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:06:19 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 18:17:27 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data::Data() : _value(0)
{}

Data::Data(int n) : _value(n)
{}

Data::Data(Data const & src)
{
	this->_value = src._value;
}

Data&	Data::operator=(Data const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_value = rhs._value;
	return (*this);
}

Data::~Data()
{}

int	Data::getValue() const
{
	return (this->_value);
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}