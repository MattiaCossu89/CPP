#include "HumanB.hpp"

HumanB::HumanB(std::string name_): name(name_), weap(0){}

void	HumanB::setWeapon(Weapon& weapon)
{
	weap = &weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weap->getType() << std::endl;
}
