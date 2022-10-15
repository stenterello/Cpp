/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:18 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/15 13:19:27 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_storage;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const & src);
		Span&	operator=(Span const & rhs);
		~Span();
		void						addNumber(int n);
		int							shortestSpan();
		int							longestSpan();
		std::vector<int>	getVector();
		class AlreadyFilled : std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is already filled");
				}
		};
		class OnlyOneStored : std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span contains only one element. Can't find span");
				}
		};
		class SpanIsEmpty : std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is empty. Can't find span");
				}
		};
};

#include "Span.tpp"

#endif