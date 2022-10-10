/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:59:30 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 17:40:02 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.class.hpp"

static int	die(std::string const & s)
{
	std::cout << s << std::endl;
	return (1);
}

static bool	check(std::string s)
{
	if ((!s[0] || ((s[0] < 48 || s[0] > 57) && s[1])) && s.compare("inf") && s.compare("-inf") && s.compare("nan"))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (die("Give me only one number please"));
	if (!check(argv[1]))
		return (die("Non valid parameter"));

	Converter	converter;
	converter.defineInfinite(argv[1]);
	converter.defineOverflow(argv[1]);
	converter.strToChar();
	converter.strToInt();
	converter.strToFloat();
	converter.strToDouble();
	return (0);
}