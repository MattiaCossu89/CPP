/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:03:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 16:19:34 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

template<class T>
int &easyfind(T &cont, int num)
{
	typename T::iterator it = cont.begin();
	for (; it != cont.end(); it++)
		if (*it == num)
			return ((*it));
	throw std::exception();
}

#endif
