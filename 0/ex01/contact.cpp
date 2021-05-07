#include "contact.hpp"

static void	print(Position pos, std::string s, int linelength)
{
	int spaces = 0;
	switch( pos )
	{
		case CENTRE: spaces = (linelength - s.size() ) / 2; break;
		case RIGHT : spaces =  linelength - s.size(); break;
		case LEFT  : spaces =  linelength - s.size(); break;

	}
	if ( spaces > 0 && (pos == RIGHT || pos == CENTRE)) std::cout << std::string(spaces, ' ');
	std::cout << s;
	if ( spaces > 0 && (pos == LEFT || pos == CENTRE)) std::cout << std::string(spaces - (pos == CENTRE ? s.size() % 2 : 0), ' ');
}

Contact::Contact(void)
{
	this->f_name = "";
	this->l_name = "";
	this->nickname = "";
	this->login = "";
	this->p_address = "";
	this->e_address = "";
	this->phone = "";
	this->birthday = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";
};

void		Contact::setFirstName(std::string first_name)
{
	for (size_t i = 0; i < first_name.size(); i++)
	{
		if (first_name[i] == '\t')
			first_name[i] = ' ';
	}
	this->f_name = first_name;
};

void		Contact::setLastName(std::string last_name)
{
	for (size_t i = 0; i < last_name.size(); i++)
	{
		if (last_name[i] == '\t')
			last_name[i] = ' ';
	}
	this->l_name = last_name;
};

void		Contact::setNickName(std::string nickname)
{
	for (size_t i = 0; i < nickname.size(); i++)
	{
		if (nickname[i] == '\t')
			nickname[i] = ' ';
	}
	this->nickname = nickname;
};

void		Contact::setLogin(std::string login)
{
	this->login = login;
};

void		Contact::setPostAddress(std::string post_address)
{
	this->p_address = post_address;
};

void		Contact::setEmailAddress(std::string email_address)
{
	this->e_address = email_address;
};

void		Contact::setPhone(std::string phone)
{
	this->phone = phone;
};

void		Contact::setBirthday(std::string birthday)
{
	this->birthday = birthday;
};

void		Contact::setFavoriteMeal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
};

void		Contact::setUnderwearColor(std::string underwear_color)
{
	this->underwear_color = underwear_color;
};

void		Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
};

void		Contact::setFirstNameSTDIN(void)
{
	std::string temp;
	print(LEFT, "\033[33mInsert First Name:\033[0m ", 33);
	std::getline(std::cin, temp);
	this->setFirstName(temp);
};

void		Contact::setLastNameSTDIN(void)
{
	std::string temp;
	print(LEFT, "\033[33mInsert Last Name:\033[0m ", 33);
	std::getline(std::cin, temp);
	this->setLastName(temp);
};

void		Contact::setNickNameSTDIN(void)
{
	std::string temp;
	print(LEFT, "\033[33mInsert Nickname:\033[0m ", 33);
	std::getline(std::cin, temp);
	this->setNickName(temp);
};

void		Contact::setLoginSTDIN(void)
{
	print(LEFT, "\033[33mInsert Login:\033[0m ", 33);
	std::getline(std::cin, this->login);
};

void		Contact::setPostAddressSTDIN(void)
{
	print(LEFT, "\033[33mInsert Postal Address:\033[0m ", 33);
	std::getline(std::cin, this->p_address);
};

void		Contact::setEmailAddressSTDIN(void)
{
	print(LEFT, "\033[33mInsert e-mail Address:\033[0m ", 33);
	std::getline(std::cin, this->e_address);
};

void		Contact::setPhoneSTDIN(void)
{
	print(LEFT, "\033[33mInsert Phone Number:\033[0m ", 33);
	std::getline(std::cin, this->phone);
};

void		Contact::setBirthdaySTDIN(void)
{
	print(LEFT, "\033[33mInsert Birthday:\033[0m ", 33);
	std::getline(std::cin, this->birthday);
};

void		Contact::setFavoriteMealSTDIN(void)
{
	print(LEFT, "\033[33mInsert Favourite Meal:\033[0m ", 33);
	std::getline(std::cin, this->favorite_meal);
};

void		Contact::setUnderwearColorSTDIN(void)
{
	print(LEFT, "\033[33mInsert Underwear Color:\033[0m ", 33);
	std::getline(std::cin, this->underwear_color);
};

void		Contact::setDarkestSecretSTDIN(void)
{
	print(LEFT, "\033[33mInsert Darkest Secret:\033[0m ", 33);
	std::getline(std::cin, this->darkest_secret);
};

std::string	Contact::getFirstName(void)
{
	return (this->f_name);
};

std::string	Contact::getLastName(void)
{
	return (this->l_name);
};

std::string	Contact::getNickName(void)
{
	return (this->nickname);
};

std::string	Contact::getLogin(void)
{
	return (this->login);
};

std::string	Contact::getPostAddress(void)
{
	return (this->p_address);
};

std::string	Contact::getEmailAddress(void)
{
	return (this->e_address);
};

std::string	Contact::getPhone(void)
{
	return (this->phone);
};

std::string	Contact::getBirthday(void)
{
	return (this->birthday);
};

std::string	Contact::getFavoriteMeal(void)
{
	return (this->favorite_meal);
};

std::string	Contact::getUnderwearColor(void)
{
	return (this->underwear_color);
};

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
};

void	Contact::getFirstNameSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mFirst Name:\033[0m";
	std::cout << (this->f_name) << std::endl;
};

void	Contact::getLastNameSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mLast Name:\033[0m";
	std::cout << (this->l_name) << std::endl;
};

void	Contact::getNickNameSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mNickname:\033[0m";
	std::cout << (this->nickname) << std::endl;
};

void	Contact::getLoginSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mLogin:\033[0m";
	std::cout << (this->login) << std::endl;
};

void	Contact::getPostAddressSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mPostal Address:\033[0m";
	std::cout << (this->p_address) << std::endl;
};

void	Contact::getEmailAddressSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33me-mail:\033[0m";
	std::cout << (this->e_address) << std::endl;
};

void	Contact::getPhoneSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mPhone:\033[0m";
	std::cout << (this->phone) << std::endl;
};

void	Contact::getBirthdaySTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mBirthday:\033[0m";
	std::cout << (this->birthday) << std::endl;
};

void	Contact::getFavoriteMealSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mFavourite Meal:\033[0m";
	std::cout << (this->favorite_meal) << std::endl;
};

void	Contact::getUnderwearColorSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mUnderwear Color:\033[0m";
	std::cout << (this->underwear_color) << std::endl;
};

void	Contact::getDarkestSecretSTDOUT(void)
{
	std::cout << std::setw(26) << std::left << "\033[33mDarkest Secret:\033[0m";
	std::cout << (this->darkest_secret) << std::endl;
};
