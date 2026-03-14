#include <iostream>
#include <string>
#include <fstream>

bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int main(int ac,  char *av[])
{
	std::basic_string<char>::size_type index;
	std::string	str = av[2];
	std::string	replaceBy = av[3];
	if (ac != 4)
	{
		std::cout << "Enter 3 arguments.\n";
		return (1);
	}
	std::string filename = av[1];
	std::ifstream	ifs(filename.c_str());
	std::string outfile = filename + ".replace";
	std::ofstream	out(outfile.c_str());
	if (!ifs.is_open() || !out.is_open())
	{
		std::cout << "File(s) cannot be opened." << std::endl;
	}
	if (is_empty(ifs))
	{
		std::cout << "Empty file, ABORTING." << std::endl;
	}
	std::string	line;
	while (std::getline(ifs, line))
	{
		while ((index = line.find(str)) <= line.size())
		{
			line.erase(index, str.size());
			line.insert(index, replaceBy);
		}
		out << line;
	}
}
