/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:16:56 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 21:28:15 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		ShrubberyCreationForm	s("prova");
		b.signForm(s);
		s.execute(b);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm	r("prova2");
		b.signForm(r);
		r.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat	z("Renato", 150);
	try
	{
		PresidentialPardonForm	p("offeso");
		b.signForm(p);
		p.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm	p2("molto offeso");
		b.signForm(p2);
		z.executeForm(p2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
