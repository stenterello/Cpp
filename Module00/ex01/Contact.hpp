/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:41 by ddelladi          #+#    #+#             */
/*   Updated: 2022/05/15 16:12:42 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	public:
		Contact(void);
		virtual ~Contact(void);
		Contact(Contact& next);
		Contact& operator=(Contact& next);
		void		insert_info(void);
		bool		exists();
		std::string	get_portion(int i);
	private:
		static std::string	field_name[5];
		std::string			info[5];
		enum				Field
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DrkstSecret
		};
};

#endif
