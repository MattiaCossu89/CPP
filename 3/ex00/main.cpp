/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:36:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 18:10:38 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

typedef void (FragTrap::*fun)(str const &) const;

int main()
{
	FragTrap frags[10];
	fun f[2] = { &FragTrap::meleeAttack, &FragTrap::rangedAttack };
	fun f_;
	int temp;
	for (int i = 0; i < 10; i++)
	{
		f_ = f[rand() % 2];
		(frags[i].*f_)(frags[(temp = rand() % 10) != i ? temp : (temp + 1) % 10].getName());
	}
}
