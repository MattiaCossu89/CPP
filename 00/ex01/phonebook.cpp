#include "phonebook.hpp"

void	print(Position pos, std::string s, int linelength)
{
	int spaces = 0;
	switch( pos )
	{
		case CENTRE: spaces = (linelength - s.size() ) / 2; break;
		case RIGHT : spaces =  linelength - s.size(); break;
		case LEFT  : spaces =  linelength - s.size(); break;

	}
	if ( spaces > 0 ) std::cout << std::string(spaces, ' ');
	std::cout << s;
	if ( spaces > 0 ) std::cout << std::string(spaces - s.size() % 2, ' ');
}

void	printLine(void)
{
	std::cout << "+" << std::string(10, '-')
			  << "+" << std::string(10, '-')
			  << "+" << std::string(10, '-')
			  << "+" << std::string(10, '-') << "+" << std::endl;
}

void	printHeader(void)
{
	printLine();
	std::cout << "|";
	print(CENTRE, "INDEX", 11);
	std::cout << "|";
	print(CENTRE, "FIRST NAME", 11);
	std::cout << "|";
	print(CENTRE, "LAST NAME", 11);
	std::cout << "|";
	print(CENTRE, "NICKNAME", 11);
	std::cout << "|" << std::endl;
	printLine();
}

PhoneBook::PhoneBook(void)
{
	this->last_index = -1;
};

void	PhoneBook::addContact(void)
{
	this->p_book[this->last_index].setFirstNameSTDIN();
	this->p_book[this->last_index].setLastNameSTDIN();
	this->p_book[this->last_index].setNickNameSTDIN();
	this->p_book[this->last_index].setLoginSTDIN();
	this->p_book[this->last_index].setPostAddressSTDIN();
	this->p_book[this->last_index].setEmailAddressSTDIN();
	this->p_book[this->last_index].setPhoneSTDIN();
	this->p_book[this->last_index].setBirthdaySTDIN();
	this->p_book[this->last_index].setFavoriteMealSTDIN();
	this->p_book[this->last_index].setUnderwearColorSTDIN();
	this->p_book[this->last_index].setDarkestSecretSTDIN();
};

void	PhoneBook::printContact(int index)
{
	if (index < 0 || index > this->last_index)
	{
		std::cout << "Inexistent Index" << std::endl;
		return ;
	}
	this->p_book[index].getFirstNameSTDOUT();
	this->p_book[index].getLastNameSTDOUT();
	this->p_book[index].getNickNameSTDOUT();
	this->p_book[index].getLoginSTDOUT();
	this->p_book[index].getPostAddressSTDOUT();
	this->p_book[index].getEmailAddressSTDOUT();
	this->p_book[index].getPhoneSTDOUT();
	this->p_book[index].getBirthdaySTDOUT();
	this->p_book[index].getFavoriteMealSTDOUT();
	this->p_book[index].getUnderwearColorSTDOUT();
	this->p_book[index].getDarkestSecretSTDOUT();
};

void	PhoneBook::addRequest(void)
{
	if (++this->last_index < MAX_CONTACTS)
		this->addContact();
	else
	{
		std::cout << "Your beautiful PhoneBook has \033[31mtoo many\033[0m contacts I'm sorry :("<< std::endl;
		this->last_index--;
		return ;
	}
	std::cout << this->p_book[this->last_index].getFirstName() << " ";
	std::cout << this->p_book[this->last_index].getLastName() << " " << std::endl;
	std::cout << "\033[32mAdded to your beautiful PhoneBook\033[0m" << std::endl;
};

void	PhoneBook::printContactInLine(int index)
{
	int	fn_len = this->p_book[index].getFirstName().length(),
		ln_len = this->p_book[index].getLastName().length(),
		nn_len = this->p_book[index].getNickName().length();
	std::cout << "|" << std::setw(10) << index
			  << "|" << std::setw(10) << this->p_book[index].getFirstName().substr(0, std::min(MAX_LEN, fn_len)) + ((fn_len <= MAX_LEN) ? "" : ".")
			  << "|" << std::setw(10) << this->p_book[index].getLastName().substr(0, std::min(MAX_LEN, ln_len)) + ((ln_len <= MAX_LEN) ? "" : ".")
			  << "|" << std::setw(10) << this->p_book[index].getNickName().substr(0, std::min(MAX_LEN, nn_len)) + ((nn_len <= MAX_LEN) ? "" : ".")
			  << "|" << std::endl;
};

void	PhoneBook::printAll(void)
{
	printHeader();
	for (int i = 0; i < this->last_index + 1; i++)
	{
		this->printContactInLine(i);
		printLine();
	}
};

void	PhoneBook::searchRequest(void)
{
	int index;
	std::string temp;

	this->printAll();
	if (this->last_index < 0)
	{
		std::cout << "No Contacts :(" << std::endl;
		std::cout << "Use \033[32mADD\033[0m to create a new one" << std::endl;
		return ;
	}
	std::cout << "Insert the index of Contact that you want to see" << std::endl;
	std::getline(std::cin, temp);
	if (temp.find_first_not_of("0123456789") <= temp.size())
		index = -1;
	else
		index = std::atoi(temp.c_str());
	this->printContact(index);
};
