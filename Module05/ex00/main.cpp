/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:16:56 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 19:22:39 by ddelladi         ###   ########.fr       */
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
	catch (std::exception & e)
	{
		
	}
	return (0);
}
