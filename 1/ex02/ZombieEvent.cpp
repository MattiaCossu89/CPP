#include "ZombieEvent.hpp"

std::string names[10] = {"Mathijs", "Zenas", "Pirnal", "Famine", "Beasts", "Phedan", "Sword", "Pestilence", "Pantalaimon", "Mur"};

void	ZombieEvent::setZombieType(Type type)
{
	type = type;
};

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
};

void	ZombieEvent::randomChump()
{
	srand(time(0));
	Zombie z = Zombie();
	z.setType(type);
	z.setName(names[rand() % 10]);
	z.announce();
};
