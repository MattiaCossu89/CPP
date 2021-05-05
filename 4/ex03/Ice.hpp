#ifndef ICE_HPP
#define ICE_HPP

#define str std::string
#define UI unsigned int
#define o_stream std::ostream

#include "ICharacter.hpp"

#include <iostream>
#include <string>

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();
		Ice &operator=(const Ice &copy);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
