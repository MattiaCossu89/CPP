#include "Character.hpp"

void	Character::free_materia ()
{
	for (int i = 0; i < 4; i++)
		if (materia[i])
			delete materia[i];
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
}

Character::Character(str const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
}

Character::Character(const Character &cpy)
{
	*this = cpy;
}

Character::~Character()
{
	_name = "";
	free_materia();
}

Character &Character::operator=(const Character &cpy)
{
	if (this == &cpy)
		return (*this);
	_name = cpy._name;
	free_materia();
	for (int i = 0; i < 4; i++)
		if (cpy.materia[i])
			materia[i] = cpy.materia[i]->clone();
		else
			materia[i] = 0;
	return (*this);
}

str const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	for (; i < 4 && materia[i]; i++);
	if (i == 4)
	{
		std::cout << "Not enough space for a new materia" << std::endl;
		return ;
	}
	materia[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 4)
		materia[idx] = 0;
}

void Character::use(int idx, Character& target)
{
	if (!materia[idx])
		return ;
	materia[idx]->use(target);
}

