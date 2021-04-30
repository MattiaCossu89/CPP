#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string	name;
		Weapon		*weap;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack();
};
