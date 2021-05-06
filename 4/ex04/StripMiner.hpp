/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:04:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:32:11 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINERHPP
#define STRIPMINERHPP

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

#include <iostream>

class IAsteroid;

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(const StripMiner &);
		~StripMiner();
		StripMiner &operator=(const StripMiner&);
		void mine(IAsteroid*);
};

#endif
