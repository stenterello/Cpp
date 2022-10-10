/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:44:52 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 18:58:14 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP
# include <iostream>

template <typename T>
void	swap(T & x, T & y)
{
	T	s;

	s = x;
	x = y;
	y = s;
}

template <typename T>
T	min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T	max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}


#endif