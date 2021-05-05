#pragma once

#define str std::string
#define o_stream std::ostream

#include "AWeapon.hpp"

#include <iostream>
#include <string>

class PlasmaRifle : virtual public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		PlasmaRifle &operator=(const PlasmaRifle &copy);
		~PlasmaRifle();
		virtual void	attack() const;
};
