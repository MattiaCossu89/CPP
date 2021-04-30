#pragma once
#include <string>
#include <iostream>

enum Type
{
	Generic,
	Runner,
	Voodoo
};

std::string typeToString(Type type);

class Zombie
{
	private:
		Type type;
		std::string name;
	public:
		Zombie();
		~Zombie();
		std::string getName();
		void setName(std::string name);
		Type getType();
		void setType(Type type);
		void announce();
};
