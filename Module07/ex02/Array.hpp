/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:11:56 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/12 15:10:13 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_arr;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array&	operator=(Array const & rhs);
		~Array();
		int	size() const;
		T		getValue(unsigned int idx) const;
		void	setValue(T val, unsigned int idx);
		class IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Index out of bound");
				}
		};
};

#include "Array.tpp"

#endif