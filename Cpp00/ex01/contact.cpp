/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:05:34 by galauren          #+#    #+#             */
/*   Updated: 2025/11/16 07:17:49 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


