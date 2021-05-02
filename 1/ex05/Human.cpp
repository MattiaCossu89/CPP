/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:29:51 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:29:52 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain &Human::getBrain()
{
	return (brain);
}
std::string Human::identify() const
{
	return (brain.identify());
}
