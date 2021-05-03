/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:30:48 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/03 15:49:40 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(const str &name);
		SuperTrap(const SuperTrap &cpy);
		SuperTrap &operator=(const SuperTrap &cpy);
		~SuperTrap();
		void	rangedAttack(ClapTrap &target) const;
		void	meleeAttack(ClapTrap &target) const;
		virtual str		identify() const;
		void	ninjaShoebox(SuperTrap &target);
		void	takeDamage(UI amount);
		void	beRepaired(UI amount);
};
