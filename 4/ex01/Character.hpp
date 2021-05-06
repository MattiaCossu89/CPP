/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:21 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:22 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"
#include "Enemy.hpp"

#include <iostream>
#include <string>

class Character
{
	private:
		str		name;
		int		AP;
		AWeapon	*weap;
	public:
		Character(std::string const & name);
		Character(const Character &copy);
		virtual ~Character();
		Character &operator=(const Character &copy);
		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		str const	&getName() const;
		int			getAP() const;
		const AWeapon *getWeapon() const;
};


std::ostream &operator<<(std::ostream &os, const Character &c);
