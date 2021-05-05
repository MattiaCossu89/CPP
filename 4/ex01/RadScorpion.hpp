#pragma once

#define str std::string
#define o_stream std::ostream

#include "Enemy.hpp"

#include <iostream>
#include <string>

class RadScorpion : virtual public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		RadScorpion &operator=(const RadScorpion &copy);
		virtual ~RadScorpion();
		virtual void		takeDamage(int);
};
