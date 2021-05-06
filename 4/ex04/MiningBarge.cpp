/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:04:00 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:35:17 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_equip[i] = 0;
	_size = 0;
}

MiningBarge::MiningBarge(const MiningBarge &copy)
{
	for (int i = 0; i < 4; i++)
		_equip[i] = copy._equip[i];
	_size = copy._size;
}

MiningBarge::~MiningBarge()
{
	for (int i = 0; i < 4; i++)
		_equip[i] = 0;
	_size = 0;
}

MiningBarge &MiningBarge::operator=(const MiningBarge &copy)
{
	for (int i = 0; i < 4; i++)
		_equip[i] = copy._equip[i];
	_size = copy._size;
	return (*this);
}


void MiningBarge::equip(IMiningLaser* laser)
{
	if (_size >= 4)
		return ;
	_equip[_size] = laser;
	_size++;
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	for (int i = 0; i < _size; i++)
		_equip[i]->mine(asteroid);
}

