/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:05:34 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:05:34 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define str std::string
#define UI unsigned int
#define o_stream std::ostream

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Character : public ICharacter
{
	private:
		str	_name;
		AMateria *materia[4];
		void free_materia();
	public:
		Character(str const &name);
		Character(const Character &cpy);
		~Character();
		Character &operator=(const Character &cpy);
		virtual str const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
