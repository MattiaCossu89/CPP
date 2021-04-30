#include "Weapon.hpp"

Weapon::Weapon(std::string type_):type(type_) {}

std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
