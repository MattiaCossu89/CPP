/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:22 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define o_stream std::ostream

#include "Victim.hpp"

#include <iostream>
#include <string>

class Slave : virtual public Victim
{
	private:
		Slave();
	public:
		Slave(const str &name);
		Slave(const Slave &copy);
		Slave &operator=(const Slave &copy);
		~Slave();
		virtual void	getPolymorphed() const;
};
