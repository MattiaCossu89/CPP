/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:08:09 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:26:23 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Slave.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "colors.hpp"

int main()
{
	Sorcerer robert(GREEN "Robert" NRM, GREEN "the Magnificent" NRM);
	Victim jim(YELLOW "Jimmy" NRM);
	Peon joe(RED "Joe" NRM);
	Slave micky(BLUE "Micky" NRM);
	Victim *mark_ptr;
	mark_ptr = new Slave(BLUE "Mark" NRM);
	std::cout << robert << jim << joe << micky << *mark_ptr;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(micky);
	robert.polymorph(*mark_ptr);
	delete mark_ptr;
	return 0;
}
