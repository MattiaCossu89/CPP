/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:40 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:05:41 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#define str std::string
#define UI unsigned int
#define o_stream std::ostream

#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Cure : virtual public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		virtual ~Cure();
		Cure &operator=(const Cure &copy);
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
