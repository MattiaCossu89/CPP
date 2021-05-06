/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:15 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:16 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "Victim.hpp"

#include <iostream>
#include <string>

class Peon : virtual public Victim
{
	private:
		Peon();
	public:
		Peon(const str &name);
		Peon(const Peon &copy);
		Peon &operator=(const Peon &copy);
		~Peon();
		virtual void	getPolymorphed() const;
};

o_stream &operator<<(o_stream &os, const Peon &Peon);
