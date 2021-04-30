#include <iostream>
#include <fstream>
#include <stdlib.h>

int main(int ac, const char **av)
{
	std::string line;
	if (ac == 1)
	{
		while (getline(std::cin, line))
			std::cout << line << std::endl;
		exit(0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::ifstream in;
		in.open(av[i]);
		if (!in.is_open())
		{
			std::cerr << "cato9tails: " << av[i] << ": File o directory non esistente" << std::endl;
			continue ;
		}
		while (getline(in, line))
			std::cout << line << std::endl;
	}
	exit(0);
}
