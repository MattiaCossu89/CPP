#include "Zombie.hpp"

std::string typeToString(Type type)
{
	switch (type)
	{
	case Generic:
		std::cout << "Generic";
		break;
	case Voodoo:
		std::cout << "Voodoo";
		break;
	case Runner:
		std::cout << "Runner";
		break;
	default:
		break;
	}
}

std::string Zombie::getName()
{
	return this->name;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}
Type Zombie::getType()
{
	return this->type;
}
void Zombie::setType(Type type)
{
	this->type = type;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << typeToString(type) << ")>" << "Braiiiiiiinnnssss..." << std::endl;
}
