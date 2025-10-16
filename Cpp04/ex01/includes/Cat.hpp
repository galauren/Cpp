#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal, protected Brain
{
	public:
		Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &);
		~Cat();

	private:
		Brain *_brain;
};
