/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:17:59 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 20:47:17 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm();
		std::string const			_target;
		static std::string const	_trees[3];
	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
		class OpenFileError : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("ShrubberyCreationForm Exception: error while opening file");
				}
		};
};

#endif
