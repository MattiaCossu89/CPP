/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:24 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:26 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _capacity(0), _size(0), _squad(0)
{
}

Squad::Squad(const Squad &copy)
{
	*this = copy;
}

Squad &Squad::operator=(const Squad &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "operator = call" << std::endl;
	if (_squad != copy._squad && _squad)
	{
		for (int i = 0; i < _size; i++)
			delete _squad[i];
		delete [] _squad;
	}
	_capacity = copy._capacity;
	_size = copy._size;
	_squad = new ISpaceMarine*[_capacity];
	for (int i = 0; i < _size; i++)
		_squad[i] = copy._squad[i]->clone();
	return (*this);
}

Squad::~Squad()
{
	if (_squad)
	{
		for (int i = 0; i < _size; i++)
			delete _squad[i];
		delete [] _squad;
	}
	_squad = 0;
	_size = 0;
	_capacity = 0;
}

int Squad::getCount() const
{
	return (_size);
}

ISpaceMarine* Squad::getUnit(int id) const
{
	if (_size > id)
		return (_squad[id]);
	return (0);
}
bool	Squad::in(ISpaceMarine *to_test)
{
	for (int i = 0; i < _size; i++)
		if (_squad[i] == to_test)
			return (true);
	return (false);
}

void	Squad::realloc(int capacity)
{
	ISpaceMarine **temp = _squad;
	_squad = new ISpaceMarine*[capacity];
	_capacity = capacity;
	for (int i = 0; i < _size; i++)
		_squad[i] = temp[i];
	delete [] temp;
}

int		Squad::push(ISpaceMarine* new_)
{
	if (!new_ || in(new_))
	{
		new_ ? std::cout << "Unit already in squad" << std::endl : std::cout << "Invalid unit" << std::endl;
		return (_size);
	}
	if (_size == _capacity)
		realloc(_capacity > 0 ? _capacity * 2 : 1);
	_squad[_size] = new_;
	_size++;
	return (_size);
}
