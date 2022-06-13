#include "phonebook.hpp"

PhoneBook::PhoneBook( void )
{
	Book[0].next_to_fill = true;
	i = 0;
}

PhoneBook::~PhoneBook( void )
{
}

int	PhoneBook::Add(void)
{
	std::string buff;

	while (Book[i].next_to_fill == false)
		i++;

	std::cout << YELLOW << "Adding contact " << i + 1<< std::endl << RESET;

	std::cout << BOLDBLUE << "First Name:" << std::endl << RESET;
	std::cin >> Book[i].FirstName;

	std::cout << BOLDBLUE << "Last Name:" << std::endl << RESET;
	std::cin >> Book[i].LastName;

	std::cout << BOLDBLUE << "Nick Name:" << std::endl << RESET;
	std::cin >> Book[i].NickName;

	std::cout << BOLDBLUE << "Phone Number:" << std::endl << RESET;
	std::cin >> Book[i].PhoneNumber;

	std::cout << BOLDBLUE << "Secret:" << std::endl << RESET;
	std::cin >> Book[i].Secret;

	std::cout << std::endl;
	std::cout << WHITE << BACKYELLOW << "Contact :	" << i + 1 << RESET << std::endl;
	std::cout << YELLOW << "First_ Name:	" << BOLDBLUE << Book[i].FirstName << RESET << std::endl;
	std::cout << YELLOW << "Last_ Name:	" << BOLDBLUE << Book[i].LastName << RESET << std::endl;
	std::cout << YELLOW << "Nick_ Name:	" << BOLDBLUE << Book[i].NickName << RESET << std::endl;
	std::cout << YELLOW << "Number:		" << BOLDBLUE << Book[i].PhoneNumber << RESET << std::endl;
	std::cout << YELLOW << "Secret:		" << BOLDBLUE << Book[i].Secret << RESET << std::endl << std::endl;

	if (!Book[i].FirstName.empty() || !Book[i].LastName.empty()
	|| !Book[i].NickName.empty() || !Book[i].PhoneNumber.empty()
	|| !Book[i].Secret.empty())
	{
		Book[i].next_to_fill = false;
		if (i < 7)
			Book[i + 1].next_to_fill = true;
		else if (i >= 7)
		{
			Book[0].next_to_fill = true;
			i = 0;
		}

		std::cout << std::endl;
		std::cout << GREEN << "Contact " << i + 1 << " filled" << RESET << std::endl;
	}
	else
		return (1);

	return (0);
}

int PhoneBook::Search()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|	" << i + 1 << " . |";
		printC(Book[i]);
		std::cout << std::endl;
	}
	return (0);
}

int PhoneBook::printC(Contact contact)
{
	PrintFmtStr(contact.FirstName);
	PrintFmtStr(contact.LastName);
	PrintFmtStr(contact.NickName);
	std::cout << std::endl;
	return (0);
}

int	PrintFmtStr(std::string str)
{
	if (str.size() > 10)
		std::cout << "	" << str.substr(0, 9) << '.' << " |";
	else if (str.size() == 10)
		std::cout << "	" << str << " |";
	else
	{
		std::cout << "	";
		for (size_t i = 0; i < 10 - str.size(); i++)
			std::cout << " ";
		std::cout << str << " |";
	}
	return (0);
}
