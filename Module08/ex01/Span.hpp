/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:18 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/12 18:15:47 by ddelladi         ###   ########.fr       */
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
		unsigned int		_filled;
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
		int							size() const;
		std::vector<int>::iterator	getInitialPointer();
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