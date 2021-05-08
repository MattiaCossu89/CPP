/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:44:11 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:44:12 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<class T>
void	swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<class T>
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template<class T>
T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}


#endif
