/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:28:14 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:28:15 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnStack(void)
{
	Pony		pony1;
	std::string	name;
	float		speed;

	speed = 0;
	std::cout << "Insert Stack Pony name:" << std::endl;
	std::getline(std::cin, name);
	pony1.setName(name);
	std::cout << "Insert Stack Pony speed:" << std::endl;
	while (speed <= 0)
	{
		std::getline(std::cin, name);
		speed = std::atof(name.c_str());
		if (speed <= 0)
			std::cout << "Invalid speed retry" << std::endl;
	}
	pony1.setSpeed(speed);
	std::cout << "Welcome " << pony1.getName() << "! Let's run!!" << std::endl;
	pony1.run();
}

void	ponyOnHeap(void)
{
	Pony		*pony1 = new Pony();
	std::string	name;
	int		speed;

	speed = 0;
	std::cout << "Insert Heap Pony name:" << std::endl;
	std::getline(std::cin, name);
	pony1->setName(name);
	std::cout << "Insert Heap Pony speed: step/msec" << std::endl;
	while (speed <= 0)
	{
		std::getline(std::cin, name);
		speed = std::atoi(name.c_str());
		if (speed <= 0)
			std::cout << "Invalid speed retry" << std::endl;
	}
	pony1->setSpeed(speed);
	std::cout << "Welcome " << pony1->getName() << "! Let's run!!" << std::endl;
	pony1->run();
	delete(pony1);
}

Pony::Pony(void):
name(""), speed(0) {}

Pony::~Pony(void)
{
	std::cout << name << " died \U0001F480" << std::endl;
}

void		Pony::setName(const std::string &name_)
{
	name = name_;
}
void		Pony::setSpeed(float speed_)
{
	speed = speed_;
}
std::string	Pony::getName(void)
{
	return (name);
}
float		Pony::getSpeed(void)
{
	return (speed);
}
void		Pony::run(void)
{
	for (int i = 0; i < RUN_LENGTH; i++)
	{
		std::cout << "\033[2K\033[?25l";
		std::cout<< "\U0001F3C1" << std::string(RUN_LENGTH - i - 1, '_') << "\U0001F3C7" << std::string(i, '_') << std::endl;
		std::cout << "\033[2A" << std::endl;
		usleep(1000 * 1000 / speed);
	}
	std::cout << "\033[2K\033[?25l";
	std::cout << "\033[?25h\033[1A\033[0J" << std::endl;
}
