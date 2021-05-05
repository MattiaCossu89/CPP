#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	this->name = copy.name;
	this->apcost = copy.apcost;
	this->damage = copy.damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::attack() const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}
