/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:54:13 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 16:55:37 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat&	operator=(Bureaucrat const & rhs);
		~Bureaucrat();
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(int amount);
		void		decrementGrade(int amount);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too low");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too high");
				}
		};
};

std::ostream&	operator<<(std::ostream & os, Bureaucrat const & b);

#endif
