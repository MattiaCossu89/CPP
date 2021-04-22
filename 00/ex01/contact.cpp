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

void		Contact::setFirstNameSTDIN(void)
{

	std::cout << "Insert First Name:" << std::endl;
	std::getline(std::cin, this->f_name);
};

void		Contact::setLastNameSTDIN(void)
{
	std::cout << "Insert Last Name:" << std::endl;
	std::getline(std::cin, this->l_name);
};

void		Contact::setNickNameSTDIN(void)
{
	std::cout << "Insert Nickname:" << std::endl;
	std::getline(std::cin, this->nickname);
};

void		Contact::setLoginSTDIN(void)
{
	std::cout << "Insert Login:" << std::endl;
	std::getline(std::cin, this->login);
};

void		Contact::setPostAddressSTDIN(void)
{
	std::cout << "Insert Postal Address:" << std::endl;
	std::getline(std::cin, this->p_address);
};

void		Contact::setEmailAddressSTDIN(void)
{
	std::cout << "Insert e-mail Address:" << std::endl;
	std::getline(std::cin, this->e_address);
};

void		Contact::setPhoneSTDIN(void)
{
	std::cout << "Insert Phone Number:" << std::endl;
	std::getline(std::cin, this->phone);
};

void		Contact::setBirthdaySTDIN(void)
{
	std::cout << "Insert Birthday:" << std::endl;
	std::getline(std::cin, this->birthday);
};

void		Contact::setFavoriteMealSTDIN(void)
{
	std::cout << "Insert Favourite Meal:" << std::endl;
	std::getline(std::cin, this->favorite_meal);
};

void		Contact::setUnderwearColorSTDIN(void)
{
	std::cout << "Insert Underwear Color:" << std::endl;
	std::getline(std::cin, this->underwear_color);
};

void		Contact::setDarkestSecretSTDIN(void)
{
	std::cout << "Insert Darkest Secret:" << std::endl;
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
	std::cout << "First Name:" << std::endl;
	std::cout << (this->f_name) << std::endl;
};

void	Contact::getLastNameSTDOUT(void)
{
	std::cout << "Last Name:" << std::endl;
	std::cout << (this->l_name) << std::endl;
};

void	Contact::getNickNameSTDOUT(void)
{
	std::cout << "Nickname:" << std::endl;
	std::cout << (this->nickname) << std::endl;
};

void	Contact::getLoginSTDOUT(void)
{
	std::cout << "Login:" << std::endl;
	std::cout << (this->login) << std::endl;
};

void	Contact::getPostAddressSTDOUT(void)
{
	std::cout << "Postal Address:" << std::endl;
	std::cout << (this->p_address) << std::endl;
};

void	Contact::getEmailAddressSTDOUT(void)
{
	std::cout << "e-mail:" << std::endl;
	std::cout << (this->e_address) << std::endl;
};

void	Contact::getPhoneSTDOUT(void)
{
	std::cout << "Phone:" << std::endl;
	std::cout << (this->phone) << std::endl;
};

void	Contact::getBirthdaySTDOUT(void)
{
	std::cout << "Birthday:" << std::endl;
	std::cout << (this->birthday) << std::endl;
};

void	Contact::getFavoriteMealSTDOUT(void)
{
	std::cout << "Favourite Meal:" << std::endl;
	std::cout << (this->favorite_meal) << std::endl;
};

void	Contact::getUnderwearColorSTDOUT(void)
{
	std::cout << "Underwear Color:" << std::endl;
	std::cout << (this->underwear_color) << std::endl;
};

void	Contact::getDarkestSecretSTDOUT(void)
{
	std::cout << "Darkest Secret:" << std::endl;
	std::cout << (this->darkest_secret) << std::endl;
};
