/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:21 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/12 18:15:51 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _filled(0) {}

Span::Span(unsigned int n) : _size(n), _filled(0)
{
	this->_storage.reserve(n);
}

Span::Span(Span const & src) : _size(src.size()), _filled(src._filled)
{
	std::vector<int>::iterator	iter;

	iter = src.getInitialPointer();
	while (iter != src._storage.end())
	{
		this->_storage.push_back(*iter);
		iter = std::next(iter);
	}
}

Span&	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_size = rhs.size();
	this->_filled = rhs._filled;
	std::vector<int>::iterator	iter;


	iter = rhs.getInitialPointer();
	while (iter != rhs._storage.end())
	{
		this->_storage.push_back(*iter);
		iter = std::next(iter);
	}
	return (*this);
}

Span::~Span() {}

int	Span::size() const
{
	return (this->_size);
}

void	Span::addNumber(int n)
{
	if (this->_filled == this->_size)
		throw Span::AlreadyFilled();
	this->_storage.push_back(n);
	this->_filled++;
}

int	Span::shortestSpan()
{
	
}

int	Span::longestSpan()
{

}

std::vector<int>::iterator	Span::getInitialPointer()
{
	return (this->_storage.begin());
}