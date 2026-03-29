#include <sstream>
#include <cctype>

#include "phoneBook.hpp"

///////////////////////////////////////////////////////////////////////////////
PhoneBook::PhoneBook(){}

PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
}

PhoneBook	&PhoneBook::operator=(const PhoneBook &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 8; i++)
	{
		this->_contacts[i] = other._contacts[i];
	}
	return (*this);
}

PhoneBook::~PhoneBook(){}
///////////////////////////////////////////////////////////////////////////////

std::string	askContactInfos(const std::string str)
{
	std::string	answer = "";

	std::cout << str;
	while (answer.empty())
	{
		getline(std::cin, answer);
		for (unsigned long i = answer.length() - 1; isspace(answer[i]); i--)
		{
			answer.erase(i,1);
			if (i == 0)
				break ;
		}
		for (unsigned long i = 0; i < answer.length() && isspace(answer[i]); i = 0)
		{
			answer.erase(i,1);
		}
		for (unsigned long i = 0; i < answer.length(); i++)
		{
			if (!isprint(answer[i]))
				return ("");
		}
		if (str == "Phone Number : ")
			for (unsigned long i = 0; i < answer.length(); i++)
				if (!isdigit(answer[i]))
				{
					std::cout << "MUST be a number, even a false one like 777777777777777777777777\n";
					return ("");
				}

		if (std::cin.eof())
			return ("");
	}
	std::cout << std::endl;
	return (answer);
}

void	PhoneBook::add()
{
	static int	val = -1;
	Contact		tmp;

	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].firstName.empty())
		{
			if (!((tmp.firstName = askContactInfos("First Name : ")).empty()) &&
			!((tmp.lastName = askContactInfos("Last Name : ")).empty()) &&
			!((tmp.nickName = askContactInfos("Nickname : ")).empty()) &&
			!((tmp.phoneNum = askContactInfos("Phone Number : ")).empty()) &&
			!((tmp.DrkstScrt = askContactInfos("Darkest secret : ")).empty()))
			{
				this->_contacts[i] = tmp;
				std::cout << "New contact added." << std::endl;
				return ;
			}
			std::cout << "Aborting." << std::endl;
			return ;
		}
	}

	if (!((tmp.firstName = askContactInfos("First Name : ")).empty()) &&
	!((tmp.lastName = askContactInfos("Last Name : ")).empty()) &&
	!((tmp.nickName = askContactInfos("Nickname : ")).empty()) &&
	!((tmp.phoneNum = askContactInfos("Phone Number : ")).empty()) &&
	!((tmp.DrkstScrt = askContactInfos("Darkest secret : ")).empty()))
	{
		std::cout << "Oldest contact erased;" << std::endl;
		this->_contacts[++val % 8] = tmp;
		std::cout << "New contact added." << std::endl;
		return ;
	}
	std::cout << "Empty field: aborting." << std::endl;
}

std::string truncate(std::string str, size_t width)
{
	if (str.length() <= width)
		return (str.substr(0, width));
	else
		return (str.substr(0, width - 1) + ".");
}

void	PhoneBook::search()
{
	std::string	input;
	int			chosenIndex;
	int			i;

	std::cout << "              | CONTACTS |" << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "\e[3;37m|  Index   |First Name| Last Name| Nickname |\e[0m" << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	for (i = 0; i < 8 && !(this->_contacts[i].DrkstScrt.empty()); i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << (i + 1);
		std::cout << "|";
		std::cout.width(10);
		std::cout << truncate(this->_contacts[i].firstName, 10) << "|";
		std::cout.width(10);
		std::cout << truncate(this->_contacts[i].lastName, 10) << "|";
		std::cout.width(10);
		std::cout << truncate(this->_contacts[i].nickName, 10) << "|";
		std::cout << "\n ------------------------------------------- " << std::endl;
	}
	input = askContactInfos("Choose the index of the contact you wish to see : ");
	std::stringstream iss(input);
	iss >> chosenIndex;
	if (input.empty() || chosenIndex >= (i + 1) || chosenIndex == 0 || iss.fail())
	{
		std::cout << "Not a correct index, aborting." << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "First Name     : " << this->_contacts[chosenIndex - 1].firstName << std::endl;
	std::cout << "Last Name      : " << this->_contacts[chosenIndex - 1].lastName << std::endl;
	std::cout << "Nickname       : " << this->_contacts[chosenIndex - 1].nickName << std::endl;
	std::cout << "Phone Number   : " << this->_contacts[chosenIndex - 1].phoneNum << std::endl;
	std::cout << "Darkest Secret : " << this->_contacts[chosenIndex - 1].DrkstScrt << std::endl;
}
	
int	main()
{
	PhoneBook	book;
	std::string	str = "WOW LOOK AT THAT STRING BROTHER";

	while (str != "EXIT")
	{
		std::cout << "\nUse any Option listed : [ADD | SEARCH | EXIT]\n\n";
		getline(std::cin, str);

		if (std::cin.eof())
		{
			std::cout << "ABORT" << std::endl;
			return (1);
		}
		if (str == "ADD")
			book.add();
		else if (str == "SEARCH")
			book.search();
	}
	return (0);
}
