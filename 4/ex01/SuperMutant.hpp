/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:02 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:03 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "Enemy.hpp"

#include <iostream>
#include <string>

class SuperMutant : virtual public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		SuperMutant &operator=(const SuperMutant &copy);
		virtual ~SuperMutant();
		virtual void		takeDamage(int);
};
