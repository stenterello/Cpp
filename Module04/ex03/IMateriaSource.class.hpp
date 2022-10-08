/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:37:28 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 21:40:02 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP
# include "AMateria.class.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
