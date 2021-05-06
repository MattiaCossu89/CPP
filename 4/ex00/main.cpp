/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:08:10 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Slave.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Slave micky("Micky");
	Victim *mark_ptr;
	mark_ptr = new Slave("Mark");
	std::cout << robert << jim << joe << micky << *mark_ptr;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(micky);
	robert.polymorph(*mark_ptr);
	delete mark_ptr;
	return 0;
}
