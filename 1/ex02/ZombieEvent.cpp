#include "ZombieEvent.hpp"

std::string ZombieEvent::names[10] = {"Mathijs", "Zenas", "Pirnal", "Famine", "Beasts", "Phedan", "Sword", "Mexont", "Genar", "Mur"};

ZombieEvent::ZombieEvent()
{
	srand(time(0));
};

void	ZombieEvent::setZombieType(Type type_)
{
	type = type_;
};

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
};

void	ZombieEvent::randomChump()
{
	Zombie z = Zombie();
	z.setType(type);
	z.setName(names[rand() % 10]);
	z.announce();
};
