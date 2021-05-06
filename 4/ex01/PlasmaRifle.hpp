/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:40 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:41 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"

#include <iostream>
#include <string>

class PlasmaRifle : virtual public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		PlasmaRifle &operator=(const PlasmaRifle &copy);
		~PlasmaRifle();
		virtual void	attack() const;
};
