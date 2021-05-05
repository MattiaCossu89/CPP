#pragma once

#include "ISpaceMarine.hpp"

#include <iostream>

class AssaultTerminator : virtual public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &);
		AssaultTerminator &operator=(const AssaultTerminator &);
		virtual ~AssaultTerminator();
		virtual AssaultTerminator* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};
