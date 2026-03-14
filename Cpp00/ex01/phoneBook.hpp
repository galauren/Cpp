#pragma once

#include <iostream>

class	PhoneBook
{
	public :
		class	Contact
		{
			public :
				Contact();
				Contact(const Contact &other);
				Contact &operator=(const Contact &other);
				~Contact();

			public :
				std::string	firstName;
				std::string	lastName;
				std::string	nickName;
				std::string	phoneNum;
				std::string	DrkstScrt;
		};

	private :
		Contact	_contacts[8];

	public :
		PhoneBook();
		PhoneBook(const PhoneBook &other);
		PhoneBook &operator=(const PhoneBook &other);
		~PhoneBook();

	public :
		void	add(void);
		void	search(void);
};
