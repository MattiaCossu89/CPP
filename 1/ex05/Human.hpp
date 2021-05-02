/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:55 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:56 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"
#include <iostream>
#include <string>

class Human
{
	private:
		Brain		brain;
	public:
		const Brain	&getBrain();
		std::string	identify() const;
};
