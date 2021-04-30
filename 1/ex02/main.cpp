#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent ze0, ze1, ze2;
	Zombie *z0, *z1, *z2;
	ze0.setZombieType(Generic);
	ze1.setZombieType(Voodoo);
	ze2.setZombieType(Runner);
	z0 = ze0.newZombie("Gijsje");
	z0->announce();
	delete z0;
	z1 = ze1.newZombie("Naminex");
	z1->announce();
	delete z1;
	z2 = ze2.newZombie("Mysen");
	z2->announce();
	delete z2;
	ze0.randomChump();
	ze1.randomChump();
	ze2.randomChump();
}
