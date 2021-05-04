#pragma once

#define str std::string
#define o_stream std::ostream

#include "Victim.hpp"

#include <iostream>
#include <string>

class Sorcerer
{
	private:
		str	name;
		str	title;
		Sorcerer();
	public:
		Sorcerer(const str &name, const str &title);
		Sorcerer(const Sorcerer &copy);
		Sorcerer &operator=(const Sorcerer &copy);
		~Sorcerer();
		str		getName() const;
		str		getTitle() const;
		void	polymorph(Victim const &) const;
};

o_stream &operator<<(o_stream &os, const Sorcerer &Sorcerer);
