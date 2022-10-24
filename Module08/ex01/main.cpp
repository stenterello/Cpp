/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:29:16 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/24 15:40:47 by ddelladi         ###   ########.fr       */
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
	std::cout << s.getVector().size() << std::endl;
	std::cout << n.getVector().size() << std::endl;
	n.getVector().push_back(150);
	std::cout << n.getVector().size() << std::endl;
	try
	{
		n.addNumber(42);
		n.addNumber(24);
		n.addNumber(17);
		n.addNumber(38);
		n.addNumber(122);
		n.addNumber(77);
		n.addNumber(96);
		n.addNumber(68);
		// not inserted //
		n.addNumber(81);
		n.addNumber(83);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest Span in n is " << n.shortestSpan() << std::endl;
	std::cout << "Longest Span in n is " << n.longestSpan() << std::endl;
	try
	{
		std::cout << "Longest Span in s is " << s.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span	crazy(1000000);
	crazy.crazyAdding();
	std::cout << "Shortest Span in crazy is " << crazy.shortestSpan() << std::endl;
	std::cout << "Longest Span in crazy is " << crazy.longestSpan() << std::endl;
	return (0);
}
