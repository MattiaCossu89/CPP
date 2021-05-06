/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:10 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:11 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include <iostream>
#include <string>

class AWeapon
{
	private:
		AWeapon();
	protected:
		str	name;
		int	apcost;
		int	damage;
	public:
		AWeapon(str const & name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		AWeapon &operator=(const AWeapon &copy);
		virtual ~AWeapon();
		str const		&getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};
