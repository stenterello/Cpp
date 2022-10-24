/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:16:05 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/24 14:43:01 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>
# include <iostream>

class ElementNotFound : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Element not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T cont, int val)
{
	typename T::iterator	iter;
	iter = std::find(cont.begin(), cont.end(), val);
	if (iter == cont.end())
		throw ElementNotFound();
	return (iter);
}

#endif
