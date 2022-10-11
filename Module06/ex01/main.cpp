/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:24 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/11 16:11:55 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main()
{
	Data	d(5);

	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	std::cout << "Serializing..." << std::endl;
	std::cout << "Serialized value is " << serialize(&d) << std::endl;
	std::cout << "Deserializing..." << std::endl;
	std::cout << "Deserialized value is " << deserialize(serialize(&d)) << std::endl;
	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	return (0);
}