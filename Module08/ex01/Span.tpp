/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:21 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/15 13:19:34 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n)
{
	this->_storage.reserve(n);
}

Span::Span(Span const & src) : _size(src._size)
{
	this->_storage = src._storage;
}

Span&	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (this->_storage.size() == this->_size)
		throw Span::AlreadyFilled();
	this->_storage.push_back(n);
}

int	Span::shortestSpan()
{
	return (1);
}

int	Span::longestSpan()
{
	return (1);
}

std::vector<int>	Span::getVector()
{
	return (this->_storage);
}