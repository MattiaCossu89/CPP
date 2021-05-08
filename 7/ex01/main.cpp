/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:44:22 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:44:23 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include "iter.hpp"

#include <iostream>
#include <string>

void	incInt(int &num)
{
	num++;
}

void	upperString(std::string & str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

template<class T>
void printArray(T *arr, size_t size)
{
	std::cout << "[";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i != size - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	std::cout << YELLOW "Array before Iter:" NRM << std::endl;
	printArray(arr, 10);
	iter(arr, 10, &incInt);
	std::cout << YELLOW "Array after Iter:" NRM << std::endl;
	printArray(arr, 10);
	std::string strs[6] = {
		"ciao",
		"come",
		"va",
		"tutto",
		"bene",
		"grazie"
	};
	std::cout << YELLOW "Array before Iter:" NRM << std::endl;
	printArray(strs, 6);
	iter(strs, 6, &upperString);
	std::cout << YELLOW "Array after Iter:" NRM << std::endl;
	printArray(strs, 6);
}
