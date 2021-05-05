#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#define str std::string

#include "AMateria.hpp"

#include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(str const & type) = 0;
};

#endif
