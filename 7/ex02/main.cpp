#include "Array.hpp"
#include "colors.hpp"

#include <stdlib.h>

#include <ctime>
#include <iostream>

void	upperString(std::string & str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void	incInt(int &num)
{
	num++;
}

template<class T>
void iter(Array<T> &ar, void (*fun)(T&))
{
	for (UI i = 0; i < ar.size(); i++)
		(*fun)(ar[i]);
}

template<class T>
void printArray(Array<T> &ar)
{
	std::cout << "[";
	for (size_t i = 0; i < ar.size(); i++)
	{
		std::cout << ar[i];
		if (i != ar.size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

int main()
{
	srand(time(NULL));
	Array<int> arr(10), arr2;

	for (UI i = 0; i < arr.size(); i++)
		arr[i] = rand() % 100;
	arr2 = arr;
	std::cout << YELLOW "First array:" NRM << std::endl;
	printArray(arr);
	std::cout << YELLOW "Second array:" NRM << std::endl;
	printArray(arr2);
	iter(arr2, &incInt);
	std::cout << GREEN "Arrays after second's edit:" NRM << std::endl;
	std::cout << YELLOW "First array:" NRM << std::endl;
	printArray(arr);
	std::cout << YELLOW "Second array:" NRM << std::endl;
	printArray(arr2);

	Array<std::string> strs(3);
	Array<std::string> strs2;
	strs[0] = "Ehila";
	strs[1] = "Hola";
	strs[2] = "Strings are so beautiful!!";
	strs2 = strs;
	std::cout << YELLOW "First string array:" NRM << std::endl;
	printArray(strs);
	std::cout << YELLOW "Second string array:" NRM << std::endl;
	printArray(strs2);
	iter(strs2, &upperString);
	std::cout << GREEN "Arrays after second's edit:" NRM << std::endl;
	std::cout << YELLOW "First string array:" NRM << std::endl;
	printArray(strs);
	std::cout << YELLOW "Second string array:" NRM << std::endl;
	printArray(strs2);
}
