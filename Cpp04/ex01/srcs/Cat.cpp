#include "Cat.hpp"

Cat::Cat()
{
	std::cout << YELLOW << "Constructor Cat" << RESET << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	this->setType(other.getType());
	this->_brain = new Brain(*other._brain);
}

Cat	  &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		this->_type = other.getType();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << BLUE << "Destructor Cat" << RESET << std::endl;
	delete this->_brain;
}
