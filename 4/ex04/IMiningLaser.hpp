/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:49 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:03:49 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASERHPP
#define IMININGLASERHPP

#include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif
