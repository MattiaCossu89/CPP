#pragma once

#include "Fixed.hpp"

#include <string>
#include <sstream>

class Resolver
{
	private:
		std::string	expr;
		Fixed		res;
		Resolver();
	public:
		Resolver(std::string expr);
		~Resolver();
		Fixed	getSolution() const;
};

Resolver::Resolver(std::string expr)
{
}

Resolver::~Resolver()
{
}
