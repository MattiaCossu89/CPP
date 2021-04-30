#include "Brain.hpp"

bool Brain::first = false;

Brain::Brain()
{
	if (!first)
	{
		srand(time(0));
		first = true;
	}
	pers = (Personality)(rand() % 16);
};

std::string Brain::identify() const
{
	std::stringstream s;
	std::string str;

	s << this;
	str = s.str();
	for(int i = 0; i < s.str().length(); i++)
		str[i] = toupper(str[i]);
	return (str);
};
