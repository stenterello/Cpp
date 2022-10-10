/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:06:22 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 18:16:11 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <cstdint>
# include <iostream>

class Data
{
	private:
		int	_value;
	public:
		Data();
		Data(int n);
		Data(Data const & src);
		Data&	operator=(Data const & rhs);
		~Data();
		int		getValue() const;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif