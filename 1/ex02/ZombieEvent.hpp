#pragma once
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class ZombieEvent
{
	private:
		Type				type;
		static std::string	names[10];
	public:
		ZombieEvent();
		void	setZombieType(Type type);
		Zombie	*newZombie(std::string name);
		void	randomChump();
};
