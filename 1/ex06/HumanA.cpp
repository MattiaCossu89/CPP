#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon): name(name_), weap(weapon){}

void	HumanA::setWeapon(Weapon& weapon)
{
	weap = weapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weap.getType() << std::endl;
}
