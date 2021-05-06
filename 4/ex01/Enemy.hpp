/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:29 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:07:30 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include <iostream>
#include <string>

class Enemy
{
	private:
		Enemy();
	protected:
		int	_hp;
		str	_type;
	public:
		Enemy(int hp, str const &type);
		Enemy(const Enemy &copy);
		Enemy &operator=(const Enemy &copy);
		virtual ~Enemy();
		std::string const	&getType() const;
		int					getHP() const;
		virtual void		takeDamage(int);
};
