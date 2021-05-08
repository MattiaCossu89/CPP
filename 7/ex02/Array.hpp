/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:44:28 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:44:29 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define UI unsigned int
#include <exception>
#include <iostream>

template<class T>
class Array
{
	private:
		UI _size;
		T *_arr;
	public:
		Array();
		Array(UI n);
		Array(const Array &copy);
		~Array();
		Array	&operator=(const Array &copy);
		T		&operator[](UI pos);
		UI		size() const;
};

template<class T>
Array<T>::Array()
{
	_size = 0;
	_arr = new T[0];
}

template<class T>
Array<T>::Array(UI n)
{
	_size = n;
	_arr = new T[_size];
}


template<class T>
Array<T>::Array(const Array<T> &copy) : _size(copy._size)
{
	_arr = new T[_size];
	for (UI i = 0; i < _size; i++)
		_arr[i] = copy._arr[i];
}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	if (this == &copy)
		return (*this);
	if (_arr)
		delete [] _arr;
	_size = copy._size;
	_arr = new T[_size];
	for (UI i = 0; i < _size; i++)
		_arr[i] = copy._arr[i];
	return (*this);
}

template<class T>
Array<T>::~Array()
{
	delete [] _arr;
	_arr = 0;
	_size = 0;
}

template<class T>
T &Array<T>::operator[](UI pos)
{
	if (pos >= _size)
		throw std::exception();
	return (_arr[pos]);
}

template<class T>
UI Array<T>::size() const
{
	return (_size);
}

#endif
