/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 13:04:13 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

typedef void (FragTrap::*fun)(ClapTrap&) const;
typedef void (ScavTrap::*fun_s)(ClapTrap&) const;

int main()
{
		srand(time(0));

	FragTrap frags[10];
	fun f[2] = { &FragTrap::meleeAttack, &FragTrap::rangedAttack };
	fun_s f1[2] = { &ScavTrap::meleeAttack, &ScavTrap::rangedAttack };
	fun f_;
	fun_s fs_;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		f_ = f[rand() % 2];
		(frags[i].*f_)(frags[(temp = rand() % 10) != i ? temp : (temp + 1) % 10]);
	}
	for (int i = 0; i < 10; i++)
		frags[i].vaulthunter_dot_exe(frags[(temp = rand() % 10) != i ? temp : (temp + 1) % 10]);

	std::cout << std::endl << std::endl << std::endl << std::endl << "\033[33mE' il turno degli ScavTraps!!\033[0m" << std::endl;
	ScavTrap scav[3];
	for (int i = 0; i < 6; i++)
	{
		fs_ = f1[rand() % 2];
		(scav[i % 3].*fs_)(frags[(temp = rand() % 10) != i ? temp : (temp + 1) % 10]);
	}
	for (int i = 0; i < 10; i++)
		scav[i % 3].challengeNewcomer(frags[(temp = rand() % 10) != i ? temp : (temp + 1) % 10]);
	std::cout << std::endl << std::endl << std::endl << std::endl;

}
