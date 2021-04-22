#include "phonebook.hpp"

int	main(void)
{
	PhoneBook pb;

	std::string in;
	std::cout << "Welcome on your Beautiful PhoneBook!" << std::endl;
	std::cout << "Insert \033[32mADD\033[0m to add new contact\nInsert \033[34mSEARCH\033[0m to find the contact that you want\nInsert \033[31mEXIT\033[0m to simply exit :)" << std::endl;
	std::getline(std::cin, in);
	while (in != "EXIT")
	{
		if (in == "ADD")
			pb.addRequest();
		else if (in == "SEARCH")
			pb.searchRequest();
		else
			std::cout << "\033[31mInvalid Command\033[0m" << std::endl;
		std::getline(std::cin, in);
	}
	std::cout << "Ciao Ciao!!" << std::endl;
}
