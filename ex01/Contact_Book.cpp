#include "phonebook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook PhoneBook;

	bool exit = false;

	while (!exit)
	{
		std::cout << "What would you like to do:" << std::endl;
		std::cout << "1. ADD - Adds a contact" << std::endl;
		std::cout << "2. SEARCH - Searchs a contact" << std::endl;
		std::cout << "3. EXIT - Close the Phonebook" << std::endl;
		std::cin >> input;

		if (!input.compare("add")
		|| !input.compare("Add")
		|| !input.compare("ADD")
		|| !input.compare("1"))
			PhoneBook.Add();

		if (!input.compare("search")
		|| !input.compare("Search")
		|| !input.compare("SEARCH")
		|| !input.compare("2"))
			PhoneBook.Search();

		if (!input.compare("exit")
		|| !input.compare("Exit")
		|| !input.compare("EXIT")
		|| !input.compare("3"))
			exit = true;
	}
	return (0);
}