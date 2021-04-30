#include "Human.hpp"

typedef void (Human::*fun)(const std::string &);

void Human::meleeAttack(std::string const & target)
{
	std::cout << "\U00002694 attack to " << target << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "\U0001F3F9 attack to " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "\U0001F92C to " << target << std::endl;
}
void Human::action(std::string const & action_name, std::string const & target)
{
	fun f_p[3] = {(&Human::meleeAttack),(&Human::rangedAttack),(&Human::intimidatingShout)};
	std::string name[3] = {"melee meleeAttack Melee MeleeAttack", "Ranged RangedAttack ranged rangedAttack", "intimidating shout Shout intimidatingShout"};

	for (int i = 0; i < 3; i++)
		if (action_name.find(name[i]) != std::string::npos || name[i].find(action_name) != std::string::npos)
			(this->*f_p[i])(target);

}