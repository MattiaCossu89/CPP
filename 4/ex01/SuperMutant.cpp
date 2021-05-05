#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy) {}

SuperMutant &SuperMutant::operator=(const SuperMutant &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void		SuperMutant::takeDamage(int dmg)
{
	this->Enemy::takeDamage(dmg - 3);
}
