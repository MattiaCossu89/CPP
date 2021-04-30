/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:50:00 by mcossu            #+#    #+#             */
/*   Updated: 2021/04/29 15:21:42 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <unistd.h>
#include <cstdlib>
#define RUN_LENGTH 10

class Pony
{
	private:
		std::string	name;
		int		speed;
	public:
		Pony(void);
		~Pony();
		void		setName(const std::string &name_);
		void		setSpeed(float speed_);
		std::string	getName(void);
		float		getSpeed(void);
		void		run(void);
};

void	ponyOnStack(void);
void	ponyOnHeap(void);
