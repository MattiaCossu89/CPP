/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:04:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:04:10 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef StripMinerHPP
#define StripMinerHPP

#include "IMiningLaser.hpp"

#include <iostream>

class StripMiner : public IMiningLaser
{
	public:
		StripMiner();
		StripMiner(const StripMiner &);
		virtual ~StripMiner();
		StripMiner &operator=(const StripMiner&);
		virtual ~StripMiner();
		virtual void mine(IAsteroid*);
};

#endif
