/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:35 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:03:36 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{

}

AsteroKreog::AsteroKreog(const AsteroKreog &copy)
{
	*this = copy;
}

AsteroKreog &AsteroKreog::operator=(const AsteroKreog &)
{
	return (*this);
}

AsteroKreog::~AsteroKreog()
{

}

str AsteroKreog::beMined(DeepCoreMiner *) const
{
	return ("Dragonite");
}

str AsteroKreog::beMined(StripMiner *) const
{
	return ("Flavium");
}

str AsteroKreog::getName() const
{
	return ("AsteroKreog");
}
