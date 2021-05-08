/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:44:19 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:44:20 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template<class T>
void iter(T *arr, size_t size, void (*fun)(T&))
{
	for (size_t i = 0; i < size; i++)
		fun(arr[i]);
}

#endif
