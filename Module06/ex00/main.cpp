/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:59:30 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/11 16:06:05 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cstdint>
#include <iostream>
#include <cstring>
#include <cfloat>
#include <cmath>
#include <iomanip>

static int	die(std::string const & s)
{
	std::cout << s << std::endl;
	return (1);
}

static const char*	checkInfiniteAndNan(std::string s)
{
	const char*	types[4] = {
		"inf",
		"-inf",
		"+inf",
		"nan"
	};
	for (int i = 0; i < 4; i++)
	{
		if (!s.compare(types[i]))
			return (types[i]);
	}
	return (NULL);
}

static int	infiniteOrNanConversion(const char *s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << s << "f" << std::endl;
	std::cout << "double: " << s << std::endl;
	return (0);
}

static int	normalConversion(std::string s)
{
	double		converted;

	if (std::isalpha(s[0]) && !s[1])
		converted = static_cast<char>(s[0]);
	else if (std::isalpha(s[0]) && s[1])
		return (die("Not a valid parameter"));
	else
		converted = std::strtold(s.c_str(), NULL);
	if (converted < CHAR_MIN || converted > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(converted))
		std::cout << "char: Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;
	if (converted < INT_MIN || converted > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(converted) << std::endl;
	if (converted < -FLT_MAX || converted > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else if (std::isinf(converted))
		std::cout << "float: inff" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(converted) << "f" << std::endl;
	if (converted < -DBL_MAX || converted > DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else if (std::isinf(converted))
		std::cout << "double: inf" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(converted) << std::endl;
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (die("Give me only one number please"));
	if (checkInfiniteAndNan(argv[1]))
		return (infiniteOrNanConversion(checkInfiniteAndNan(argv[1])));
	else
		return (normalConversion(argv[1]));
}