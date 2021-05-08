/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:30:48 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 14:59:49 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(const std::string &name);
		SuperTrap(const SuperTrap &cpy);
		SuperTrap &operator=(const SuperTrap &cpy);
		~SuperTrap();
		void	rangedAttack(ClapTrap &target) const;
		void	meleeAttack(ClapTrap &target) const;
		virtual std::string		identify() const;
		void	ninjaShoebox(SuperTrap &target);
		int	takeDamage(UI &amount);
		int	beRepaired(UI &amount);
};
