#pragma once

#define str std::string
#define o_stream std::ostream

#include "Enemy.hpp"

#include <iostream>
#include <string>

class SuperMutant : virtual public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		SuperMutant &operator=(const SuperMutant &copy);
		virtual ~SuperMutant();
		virtual void		takeDamage(int);
};
