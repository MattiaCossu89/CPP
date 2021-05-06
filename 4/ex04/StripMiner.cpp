/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:04:06 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:04:06 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner()
{

}

StripMiner::StripMiner(const StripMiner &copy)
{
	*this = copy;
}

StripMiner &StripMiner::operator=(const StripMiner &)
{
	return (*this);
}


StripMiner::~StripMiner()
{

}

void StripMiner::mine(IAsteroid *astro)
{
	std::cout << "* mining deep... got " << astro->beMined(this) << "! *" <<std::endl;
}
