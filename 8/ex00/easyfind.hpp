/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:03:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/16 18:12:46 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
template<class T>
int &easyfind(T &cont, int num)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), num);
	if (it == cont.end())
		throw std::exception();
	return *it;
}

#endif
