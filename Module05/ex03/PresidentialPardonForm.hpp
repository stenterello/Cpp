/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:10:50 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 21:17:58 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm();
		std::string	_target;
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
