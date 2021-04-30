#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon		&weap;
	public:
		HumanA(std::string name, Weapon &weap);
		void	setWeapon(Weapon& weapon);
		void	attack();
};
