
#pragma once

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &oui);
		Animal &operator=(const Animal &oui);
		virtual ~Animal();

		void  makeSound() const;
		std::string getType() const;
		void setType(std::string type);
	protected:
		std::string _type;
};
