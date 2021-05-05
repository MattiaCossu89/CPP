#include "AWeapon.hpp"

AWeapon::AWeapon(str const & name_, int apcost_, int damage_) : name(name_), apcost(apcost_), damage(damage_)
{

}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &copy)
{
	name = copy.name;
	apcost = copy.apcost;
	damage = copy.damage;
	return (*this);
}

AWeapon::~AWeapon()
{

}

str const		&AWeapon::getName() const
{
	return (name);
}

int				AWeapon::getAPCost() const
{
	return (apcost);
}

int				AWeapon::getDamage() const
{
	return (damage);
}
