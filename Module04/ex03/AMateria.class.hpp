/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:19:54 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 18:17:42 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include "ICharacter.class.hpp"

class AMateria
{
	protected:
		std::string			_type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria&	operator=(AMateria const & rhs);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
