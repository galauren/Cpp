#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "String address	: " << &str << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "StringREF address : " << &stringREF << std::endl;
	std::cout << "str content		: " << str << std::endl;
	std::cout << "stringPTR value	: " << *stringPTR << std::endl;
	std::cout << "StringREF value	: " << stringREF << std::endl;
	return (0);
}
