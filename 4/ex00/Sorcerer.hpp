/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:28 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:29 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "Victim.hpp"

#include <iostream>
#include <string>

class Sorcerer
{
	private:
		str	name;
		str	title;
		Sorcerer();
	public:
		Sorcerer(const str &name, const str &title);
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &copy);
		~Sorcerer();
		str		getName() const;
		str		getTitle() const;
		void	polymorph(Victim const &) const;
};

o_stream &operator<<(o_stream &os, const Sorcerer &Sorcerer);
