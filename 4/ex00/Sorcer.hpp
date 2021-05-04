#pragma once
#include <string>

#define str std::string

class Sorcer
{
private:
	/* data */
	Sorcer();
public:
	Sorcer(const str &name, const str&title);
	~Sorcer();
};

Sorcer::Sorcer(/* args */)
{
}

Sorcer::~Sorcer()
{
}
