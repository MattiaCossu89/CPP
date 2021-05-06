/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:22 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

void print_squad(ISquad *squad)
{
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		std::cout << i << " member (" << cur << ")" << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "-----------------------------------------" << std::endl;
	}
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* mark = new AssaultTerminator;
	ISquad* vlc = new Squad;
	Squad vlc2;

	vlc->push(bob);
	vlc->push(jim);
	std::cout << "\033[32mFirst TEST VLC\033[0m" << std::endl;
	print_squad(vlc);
	vlc->push(vlc->getUnit(0));
	vlc2 = *((Squad *)(vlc));
	vlc->push(vlc2.getUnit(0)->clone());
	vlc2.push(mark);
	std::cout << "\033[32mSecond TEST VLC\033[0m" << std::endl;
	print_squad(vlc);
	std::cout << "\033[32mThird TEST VLC2\033[0m" << std::endl;
	print_squad(&vlc2);
	vlc2.~Squad();
	delete vlc;
	return 0;
}
