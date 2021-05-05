#pragma once

#define str std::string
#define o_stream std::ostream

#include <iostream>
#include <string>

class Enemy
{
	private:
		Enemy();
	protected:
		int	hp;
		str	name;
	public:
		Enemy(int hp, str const &type);
		Enemy(const Enemy &copy);
		Enemy &operator=(const Enemy &copy);
		virtual ~Enemy();
		std::string const	&getType() const;
		int					getHP() const;
		virtual void		takeDamage(int);
};
