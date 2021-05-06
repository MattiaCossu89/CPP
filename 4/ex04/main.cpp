/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:57 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:12:17 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"

int main()
{
	MiningBarge mb;
	IMiningLaser *lasers[2] = {new DeepCoreMiner, new StripMiner};
	IAsteroid *astero[2] = {new KoalaSteroid, new AsteroKreog};
	mb.equip(lasers[0]);
	mb.equip(lasers[1]);
	mb.equip(lasers[1]);
	mb.equip(lasers[0]);
	mb.mine(astero[0]);
	mb.mine(astero[1]);
}
