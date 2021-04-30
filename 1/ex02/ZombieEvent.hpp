#pragma once
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		Type type;
	public:
		void	setZombieType(Type type);
		Zombie	*newZombie(std::string name);
		void	randomChump();
};
