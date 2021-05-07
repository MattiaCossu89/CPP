#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <sstream>
#include <string>

typedef struct Data_s
{
	std::string *s1;
	int i;
	std::string *s2;
	Data_s()
	{
		s1 = 0;
		i = 0;
		s2 = 0;
	}
	Data_s(std::string *s1_, int i_, std::string *s2_)
	{
		s1 = s1_;
		i = i_;
		s2 = s2_;
	};
}				Data;

void *serialize();
Data *deserialize(void *raw);

#endif
