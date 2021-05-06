/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:37 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:37 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include <iostream>
#include <string>

class Victim
{
	private:
		str	name;
		Victim();
	public:
		Victim(const str &name);
		Victim(const Victim &copy);
		Victim &operator=(const Victim &copy);
		virtual ~Victim();
		str		getName() const;
		virtual void	getPolymorphed() const;
};

o_stream &operator<<(o_stream &os, const Victim &Victim);
