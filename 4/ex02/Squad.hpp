/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:27 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:28 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISquad.hpp"

#include <iostream>
#include <string>

class Squad : public ISquad
{
	private:
		int			_capacity;
		int			_size;
		ISpaceMarine	**_squad;
		void 			realloc(int);
		bool			in(ISpaceMarine *);
	public:
		Squad();
		Squad(const Squad &);
		Squad &operator=(const Squad &);
		virtual ~Squad();
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
};
