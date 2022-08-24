/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:52 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/23 13:57:58 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
# include <iostream>

class PhoneBook
{
	private:
		Contact		_contacts[8];
		int			_older;
	public:
		PhoneBook(void);
		virtual ~PhoneBook(void);
		PhoneBook(PhoneBook& next);
		PhoneBook& operator=(PhoneBook& next);
		void	add_contact(void);
		void	display(void);
};

#endif
