#include "Human.hpp"

const Brain &Human::getBrain()
{
	return (brain);
}
std::string Human::identify() const
{
	return (brain.identify());
}
