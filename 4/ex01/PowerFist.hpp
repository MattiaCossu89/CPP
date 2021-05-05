#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"

#include <iostream>
#include <string>

class PlasmaFist
{
	public:
		PlasmaFist();
		PlasmaFist(const PlasmaFist &copy);
		PlasmaFist &operator=(const PlasmaFist &copy);
		~PlasmaFist();
		virtual void	attack() const;
};
