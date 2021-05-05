#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"

#include <iostream>
#include <string>

class PowerFist : virtual public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &copy);
		PowerFist &operator=(const PowerFist &copy);
		~PowerFist();
		virtual void	attack() const;
};
