#include "Enemy.hpp"

Enemy::Enemy(int hp, str const &type) : _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy &Enemy::operator=(const Enemy &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

Enemy::~Enemy() {}

std::string const	&Enemy::getType() const
{
	return (_type);
}

int					Enemy::getHP() const
{
	return (_hp);
}

void		Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	if (_hp - dmg < 0)
		_hp = 0;
	else
		_hp -= dmg;
}
