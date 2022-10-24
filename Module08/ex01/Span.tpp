/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:21 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/24 15:40:45 by ddelladi         ###   ########.fr       */
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
	this->_storage.reserve(this->_size);
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
	std::vector<int>			copy;
	std::vector<int>::iterator	iter;
	int							ret;

	if (!this->_storage.size())
		throw Span::SpanIsEmpty();
	else if (this->_storage.size() == 1)
		throw Span::OnlyOneStored();
	copy = this->_storage;
	std::sort(copy.begin(), copy.end());
	iter = copy.begin();
	ret = *(copy.end() - 1) - *copy.begin();
	++iter;
	while (iter != copy.end())
	{
		if (*iter - *(iter - 1) < ret)
			ret = *iter - *(iter - 1);
		iter++;
	}
	return (ret);
}

int	Span::longestSpan()
{
	std::vector<int>			copy;

	if (!this->_storage.size())
		throw Span::SpanIsEmpty();
	else if (this->_storage.size() == 1)
		throw Span::OnlyOneStored();
	copy = this->_storage;
	std::sort(copy.begin(), copy.end());
	return (*(copy.end() - 1) - *copy.begin());
}

std::vector<int>&	Span::getVector()
{
	return (this->_storage);
}

void	Span::crazyAdding()
{
	std::vector<int>	tmp;

	tmp.reserve(1000000);
	for (int i = 0; i < 1000000; i++)
	{
		srand((unsigned)time(NULL));
		tmp.push_back(rand() % 1000000);
	}
	if (this->_storage.size() + std::distance(tmp.begin(), tmp.end()) > this->_size)
		throw Span::AlreadyFilled();
	this->_storage.insert(this->_storage.begin(), tmp.begin(), tmp.end());
}
