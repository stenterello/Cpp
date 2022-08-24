/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:41 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/23 14:46:38 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>

class Contact
{
	public:
		Contact(void);
		virtual ~Contact(void);
		Contact(Contact& next);
		Contact& operator=(Contact& next);
		bool		insertInfo(int index);
		bool		exists();
		std::string	getPortion(int i);
		int			getIndex(void);
		void		clean(int index);
	private:
		static std::string	_field_name[5];
		std::string			_info[5];
		int					_index;
		enum				_Field
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DrkstSecret
		};
};

bool		isNumber(std::string s);

#endif
