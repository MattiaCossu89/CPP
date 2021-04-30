#include "Human.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
	Human jack;
	std::string emoji[6] = {"\U0001F479", "\U0001F921", "\U0001F47A", "\U0001F47B", "\U0001F47E", "\U0001F47F"};
	std::srand(time(0));

	jack.action("mel", emoji[std::rand() % 6] + " Amon");
	jack.action("ran", emoji[std::rand() % 6] + " Hinn");
	jack.action("int", emoji[std::rand() % 6] + " Amon");
	jack.action("melee", emoji[std::rand() % 6] + " Baku");
	jack.action("Shout", emoji[std::rand() % 6] + " Kulshedra");
	jack.action("shout", emoji[std::rand() % 6] + " Guayota");
	jack.action("ranged", emoji[std::rand() % 6] + " Hinn");
}
