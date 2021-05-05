#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#include <iostream>
#include <string>

#define str std::string

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria	*materia[4];
		str			materia_name[4];
		int			learned;
		void		free_materia();
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(str const & type);
};

#endif
