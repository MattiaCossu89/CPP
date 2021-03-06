/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:20 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"

Slave::Slave(const str &name_) : Victim(name_)
{
	std::cout << "What a wonderful life is now you're in the world!" << std::endl;
}

Slave::Slave(const Slave &copy) : Victim(copy)
{
	*this = copy;
}

Slave &Slave::operator=(const Slave &copy)
{
	Victim (*this) = Victim(copy);
	return (*this);
}

Slave::~Slave()
{
	std::cout << "I'm so sorry..." << std::endl;
}

void	Slave::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a real unbelievable unicorn!" << std::endl;
}

