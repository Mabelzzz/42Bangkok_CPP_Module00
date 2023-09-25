
#include "PhoneBook.hpp"

// std::string str_upper(std::const string str);

std::string str_upper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = (char)toupper(str[i]);
	return (str);
}

int	main(void)
{
	PhoneBook pb;
	std::string cmd;

	while (1)
	{
		std::cout << BOLD << "Pls enter your command: " , std::getline (std::cin, cmd);
		if (str_upper(cmd) == "ADD")
			pb.add_contact();
		else if (str_upper(cmd) == "SEARCH")
			pb.search_contact();
		else if (str_upper(cmd) == "EXIT")
			return (0);
		else
			std::cout << RED << "Invalid command" << RESET << std::endl;
	}
}
