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
