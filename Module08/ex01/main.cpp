/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:16 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/15 13:38:22 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	n(10);

	n.addNumber(2);
	Span	s = n;
	std::cout << s.getVector().at(0) << std::endl;
	std::cout << *(s.getVector().begin()) << std::endl;
	std::cout << *(n.getVector().begin()) << std::endl;
	s.getVector().at(0) = 0;
	std::cout << *s.getVector().begin() << std::endl;
	std::cout << *n.getVector().begin() << std::endl;
	return (0);
}