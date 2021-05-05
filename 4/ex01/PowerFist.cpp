#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Plasma Fist", 50, 8) {}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {}

PowerFist &PowerFist::operator=(const PowerFist &copy)

	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

PowerFist::~PowerFist() {}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
