#include "Victim.hpp"

Victim::Victim(const str &name_) : name(name_)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim &Victim::operator=(const Victim &copy)
{
	name = copy.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

str	Victim::getName() const
{
	return (name);
}

void	Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

o_stream &operator<<(o_stream &os, const Victim &Victim)
{
	os << "I'm " << Victim.getName() << " and I like otters!" << std::endl;
	return os;
}
