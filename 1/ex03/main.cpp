#include "ZombieHorde.hpp"

int main()
{
	int n = 0;
	while (n <= 0)
	{
		std::cout << "Please Insert the number of Zombie that you want" << std::endl;
		std::cin >> n;
		if (n <= 0)
			std::cout << "Please insert a positive not 0 number" << std::endl;
	}
	ZombieHorde zh = ZombieHorde(n);
	zh.announce();
}
