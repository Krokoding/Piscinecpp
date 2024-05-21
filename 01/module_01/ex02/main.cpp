#include <cctype>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Adress by str: " << &str << std::endl;
	std::cout << "Adress by stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress by stringREF: " << &stringREF << std::endl;

	std::cout << "value by str: " << str << std::endl;
	std::cout << "value by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value by stringREF: " << stringREF << std::endl;
}