/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:28:44 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:28:45 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

enum Type
{
	Generic,
	Runner,
	Voodoo
};

std::string typeToString(Type type);

class Zombie
{
	private:
		Type type;
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(std::string name, Type type);
		~Zombie();
		std::string getName();
		void setName(std::string name);
		Type getType();
		void setType(Type type);
		void announce();
};
