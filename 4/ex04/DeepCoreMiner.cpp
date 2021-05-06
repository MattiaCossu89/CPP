/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:41 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:33:31 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &copy)
{
	*this = copy;
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &)
{
	return (*this);
}

DeepCoreMiner::~DeepCoreMiner()
{

}

void DeepCoreMiner::mine(IAsteroid *astro)
{
	std::cout << "* mining deep... got " << astro->beMined(this) << "! *" <<std::endl;
}
