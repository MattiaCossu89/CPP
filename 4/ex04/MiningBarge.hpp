/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:04:03 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:04:04 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGEHPP
#define MININGBARGEHPP

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class MiningBarge
{
	private:
		IMiningLaser	*_equip[4];
		int				_size;
	public:
		MiningBarge();
		MiningBarge(const MiningBarge &);
		~MiningBarge();
		MiningBarge &operator=(const MiningBarge &);
		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;
};

#endif
