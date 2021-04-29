#pragma once
#include <string>

enum Type
{
	Generic,
	Runner,
	Voodoo
};

class Zombie
{
	private:
		Type type;

	public
		Type getType()
		{
			return this.type;
		}

	public
		void setType(Type type)
		{
			this.type = type;
		}

		std::string name;

	public
		std::string getName()
		{
			return this.name;
		}

	public
		void setName(std::string name)
		{
			this.name = name;
		}

	public:
		Zombie();
		~Zombie();
		void announce();
};
