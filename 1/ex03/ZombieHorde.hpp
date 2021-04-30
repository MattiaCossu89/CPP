#pragma once
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class ZombieHorde
{
	private:
		static std::string	names[20];
		Zombie				*zombies;
		int					N;
		ZombieHorde();
	public:
		ZombieHorde(int num);
		~ZombieHorde();
		void	announce();
};
