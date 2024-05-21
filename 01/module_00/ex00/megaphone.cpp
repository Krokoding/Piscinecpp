#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; av[i] != 0; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
			{
				std::cout << static_cast<char>(std::toupper(av[i][j]));
			}
			if (i != ac - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}