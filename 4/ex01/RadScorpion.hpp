/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:54 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:55 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "Enemy.hpp"

#include <iostream>
#include <string>

class RadScorpion : virtual public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		RadScorpion &operator=(const RadScorpion &copy);
		virtual ~RadScorpion();
		virtual void		takeDamage(int);
};
