/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:13:14 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/23 12:11:44 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			capitalize(argv[i]);
			std::cout << argv[i];
			i++;
			if (argv[i])
				std::cout << " ";
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
