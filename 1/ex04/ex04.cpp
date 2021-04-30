#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *sP = &s;
	std::string &sR = s;

	std::cout << *sP << std::endl;
	std::cout << sR << std::endl;
}
