#include "contact.hpp"

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
	this->f_name = first_name;
};

void		Contact::setLastName(std::string last_name)
{
	this->l_name = last_name;
};

void		Contact::setNickName(std::string nickname)
{
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

