#pragma once

#define str std::string
#define o_stream std::ostream

#include "Victim.hpp"

#include <iostream>
#include <string>

class Peon : virtual public Victim
{
	private:
		Peon();
	public:
		Peon(const str &name);
		Peon(const Peon &copy);
		Peon &operator=(const Peon &copy);
		~Peon();
		virtual void	getPolymorphed() const;
};

o_stream &operator<<(o_stream &os, const Peon &Peon);
