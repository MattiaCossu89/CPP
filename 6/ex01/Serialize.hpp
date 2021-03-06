/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:43:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:43:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdlib.h>

#include <ctime>
#include <iostream>
#include <sstream>
#include <string>

typedef struct Data_s
{
	std::string *s1;
	int i;
	std::string *s2;
	Data_s()
	{
		s1 = 0;
		i = 0;
		s2 = 0;
	}
	Data_s(std::string *s1_, int i_, std::string *s2_)
	{
		s1 = s1_;
		i = i_;
		s2 = s2_;
	};
}				Data;

void *serialize();
Data *deserialize(void *raw);

#endif
