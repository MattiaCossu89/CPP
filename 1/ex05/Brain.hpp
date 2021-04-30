#pragma once
#include <string>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

enum Personality
{
	INTJ,
	INTP,
	ENTJ,
	ENTP,
	INFJ,
	INFP,
	ENFJ,
	ENFP,
	ISTJ,
	ISFJ,
	ESTJ,
	ESFJ,
	ISTP,
	ISFP,
	ESTP,
	ESFP
};

class Brain
{
	private:
		static bool	first;
		Personality pers;
	public:
		static void	init();
		Brain();
		std::string identify() const;
};
