#include "ZombieHorde.hpp"

std::string ZombieHorde::names[20] = {
	"Mathijs", "Zenas", "Pirnal", "Famine", "Beasts", "Phedan", "Sword", "Pestilence", "Pantalaimon", "Mur",
	"Adriaan", "Hendricus", "Joeri", "Nel", "Gex", "Seronon", "Pastont", "Naminex", "Mysen", "Eelco"
};

ZombieHorde::ZombieHorde(int num)
{
	srand(time(0));
	zombies = new Zombie[num];
	N = num;
	for (int i = 0; i < num; i++)
	{
		zombies[i].setName(names[rand() % 20]);
		zombies[i].setType((Type)(rand() % 3));
	}
}
ZombieHorde::~ZombieHorde()
{
	delete [] zombies;
}
void	ZombieHorde::announce()
{
	for (int i = 0; i < N; i++)
		zombies[i].announce();
}
