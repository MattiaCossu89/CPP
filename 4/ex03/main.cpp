/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:00 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/11 13:38:02 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	Ice *ice = new Ice();
	Cure *cure = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	MateriaSource src2 = *(MateriaSource *)src;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	bob->equip(src->createMateria("cure"));
	bob->equip(src->createMateria("ice"));
	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(1, *me);
	bob->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;
	return 0;
}
