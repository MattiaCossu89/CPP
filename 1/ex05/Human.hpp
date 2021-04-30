#pragma once
#include "Brain.hpp"
#include <iostream>
#include <string>

class Human
{
	private:
		Brain		brain;
	public:
		const Brain	&getBrain();
		std::string	identify() const;
};
