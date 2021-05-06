/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:52 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:03:52 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{

}

KoalaSteroid::KoalaSteroid(const KoalaSteroid &copy)
{
	*this = copy;
}

KoalaSteroid &KoalaSteroid::operator=(const KoalaSteroid &)
{
	return (*this);
}

KoalaSteroid::~KoalaSteroid()
{

}

str KoalaSteroid::beMined(DeepCoreMiner *) const
{
	return ("Meium");
}

str KoalaSteroid::beMined(StripMiner *) const
{
	return ("Tartarite");
}
str KoalaSteroid::getName() const
{
	return ("KoalaSteroid");
}
