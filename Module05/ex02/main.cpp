/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:16:56 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 17:15:14 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b("Carlo", 1);

	try
	{
		b.incrementGrade(1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << b;
		Bureaucrat	c(Bureaucrat("Stefano", 155));
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	c = b;
		std::cout << c;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm	f("Primo form", 120, 5);
		std::cout << f;
		std::cout << b;
		b.signForm(f);
		std::cout << f;
		AForm	g(f);
		AForm	h("Invalid form", -1, -3);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return (0);
}
