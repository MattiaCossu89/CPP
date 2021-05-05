#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define str std::string
#define UI unsigned int
#define o_stream std::ostream

#include "ICharacter.hpp"

#include <string>
class ICharacter;

class AMateria
{
	protected:
		str	_type;
		UI	_xp;
	public:
		AMateria(str const & type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &copy);
		std::string const &getType() const;
		UI getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
