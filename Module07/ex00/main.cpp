/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:44:32 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/10 19:00:08 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"

int	main()
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	int	e = 5;
	int	f = 6;
	int g = 6;

	std::cout << "e: " << e << std::endl << "f: " << f << std::endl << "g: " << g << std::endl;
	std::cout << "SWAPPING E, F" << std::endl;
	swap(e, f);
	std::cout << "e: " << e << std::endl << "f: " << f << std::endl << "g: " << g << std::endl;
	std::cout << "Min(e,f) : " << min(e, f) << std::endl;
	std::cout << "Max(e,g) : " << max(e, g) << std::endl;
	return (0);
}