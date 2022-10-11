/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:11:56 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/11 19:12:10 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include "Array.tpp"

template <typename T>
class Array
{
	private:
		T	*_arr;
		int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const & src);
		Array&	operator=(Array const & rhs);
		~Array();
		int	getSize() const;
};

#endif