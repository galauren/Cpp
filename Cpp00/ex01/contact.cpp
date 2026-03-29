#include "phoneBook.hpp"

PhoneBook::Contact::Contact(){}

PhoneBook::Contact::Contact(const Contact &other)
{
	*this = other;
}

PhoneBook::Contact	&PhoneBook::Contact::operator=(const Contact &other)
{
	if (this == &other)
		return (*this);
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nickName = other.nickName;
	this->phoneNum = other.phoneNum;
	this->DrkstScrt = other.DrkstScrt;
	return (*this);
}

PhoneBook::Contact::~Contact(){}


