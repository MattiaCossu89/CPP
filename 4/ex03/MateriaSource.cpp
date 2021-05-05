#include "MateriaSource.hpp"

void	MateriaSource::free_materia()
{
	if (!learned)
		return ;
	for (int i = 0; i < learned; i++)
		if (materia[i])
			delete materia[i];
	for (int i = 0; i < 4; i++)
	{
		materia_name[i] = "";
		materia[i] = 0;
	}
	learned = 0;
}

MateriaSource::MateriaSource()
{
	learned = 0;
	for (int i = 0; i < 4; i++)
	{
		materia[i] = 0;
		materia_name[i] = "";
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		materia_name[i] = "";
		materia[i] = 0;
	}
	learned = 0;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	free_materia();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	free_materia();
	for (int i = 0; i < 4; i++)
	{
		if (!copy.materia[i])
			continue ;
		materia[i] = copy.materia[i]->clone();
		materia_name[i] = copy.materia_name[i];
	}
	learned = copy.learned;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* am)
{
	if (learned >= 4)
	{
		std::cout << "Not enough space for learning materia " << am->getType() << std::endl;
		return ;
	}
	materia[learned] = am->clone();
	materia_name[learned] = am->getType();
	learned++;
}

AMateria* MateriaSource::createMateria(str const & type)
{
	for (int i = 0; i < 4; i++)
		if (type == materia_name[i])
			return (materia[i]->clone());
	return (0);
}

