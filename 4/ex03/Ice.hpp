/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:48 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:05:49 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#define str std::string
#define UI unsigned int
#define o_stream std::ostream

#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();
		Ice &operator=(const Ice &copy);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
