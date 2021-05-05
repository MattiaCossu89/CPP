#pragma once

#include "ISpaceMarine.hpp"

#include <iostream>

class TacticalMarine : virtual public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &);
		TacticalMarine &operator=(const TacticalMarine &);
		virtual ~TacticalMarine();
		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};
