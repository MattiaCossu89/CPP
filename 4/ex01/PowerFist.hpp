/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:47 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:48 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"

#include <iostream>
#include <string>

class PowerFist : virtual public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		PowerFist &operator=(const PowerFist &copy);
		~PowerFist();
		virtual void	attack() const;
};
