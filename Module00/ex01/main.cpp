/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:45 by ddelladi          #+#    #+#             */
/*   Updated: 2022/05/15 16:12:46 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_cmds(void)
{
	std::cout << "\n\nThere's a typo? Pay attention to spaces and non-printable characters\n\nCommands:\n";
	std::cout << "\tADD:\tadd a contact to phonebook\n";
	std::cout << "\tSEARCH:\tdisplay contacts in the phonebook\n";
	std::cout << "\tEXIT:\texit phonebook\n";
}

int	main()
{
	std::string	cmd;
	PhoneBook	phone_book;

	while (1)
	{
		std::cout << "phone_book: ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD\0"))
			phone_book.add_contact();
		else if (!cmd.compare("SEARCH\0"))
			phone_book.display();
		else if (!cmd.compare("EXIT\0"))
			break ;
		else if (cmd.length())
			print_cmds();
	}
	return (0);
}
