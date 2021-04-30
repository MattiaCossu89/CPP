#include <iostream>
#include <fstream>

int main(int ac, const char **av)
{
	std::ifstream	file;
	std::string		line, cont = "";
	if (ac < 4 || ac > 4)
	{
		std::cout << "\033[31mInvalid Arguments\033[0m" << std::endl;
		exit(1);
	}
	if (!av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "\033[31mInvalid Arguments\033[0m" << std::endl;
		exit(1);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "\033[31mInvalid File\033[0m" << std::endl;
		exit(1);
	}
	while (getline(file, line))
		cont += line + "\n";
}
