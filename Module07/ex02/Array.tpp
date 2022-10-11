/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:11:53 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/11 19:12:53 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() : _size(0), _arr(NULL)
{}

Array::Array(unsigned int n) : _size(n)
{
	for (int i = 0; i < n; i++)
		this->_arr[i] = new (T);
}

Array::Array(Array const & src) : _size(src.getSize())
{
	for (int i = 0; i < n; i++)
		this->_arr[i] = new (T);
	for (int i = 0; i < n; i++)
		this->_arr[i]
}

Array&	Array::operator=(Array const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_size = rhs.getSize();
}

Array::~Array()
{
	for (int i = 0; i < this->_size; i++)
		delete this->_arr[i];
}

int	Array::getSize() const
{
	return (this->_size);
}