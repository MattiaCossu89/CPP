/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:37 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:38 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"

#include <iostream>

class TacticalMarine : virtual public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &);
		TacticalMarine &operator=(const TacticalMarine &);
		virtual ~TacticalMarine();
		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};
