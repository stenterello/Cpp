/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:24 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 18:16:52 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main()
{
	Data	d(5);

	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	deserialize(serialize(&d));
	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	return (0);
}