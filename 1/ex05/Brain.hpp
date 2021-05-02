/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:48 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:48 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
