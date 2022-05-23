/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:52 by ddelladi          #+#    #+#             */
/*   Updated: 2022/05/15 16:12:53 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public:
		PhoneBook(void);
		virtual ~PhoneBook(void);
		PhoneBook(PhoneBook& next);
		PhoneBook& operator=(PhoneBook& next);
		void	add_contact(void);
		void	display(void);
	private:
		Contact		contacts[8];
		int			older;
};

#endif
