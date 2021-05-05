#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) {}

RadScorpion &RadScorpion::operator=(const RadScorpion &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

void		RadScorpion::takeDamage(int dmg)
{
	this->Enemy::takeDamage(dmg);
}
