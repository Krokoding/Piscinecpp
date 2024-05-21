#include <cctype>
#include <string>
#include <iostream>
#include <fstream>


std::string	replace(std::string &line, std::string &s1, std::string &s2)
{
	size_t		pos = 0;
	size_t		lastPos = 0;
	std::string	result;

	while ((pos = line.find(s1, lastPos)) != std::string::npos) {
		result.append(line.substr(lastPos, pos - lastPos));
		result.append(s2);
		lastPos = pos + s1.length();
	}
	result.append(line.substr(lastPos));
	return result;
}
int	main( int ac, char **av )
{
	if (ac != 3)
		return (1);
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	inputFile = av[1];
	std::string	outputFile = inputFile + ".replace";
	std::ifstream file(inputFile);
	std::ofstream outfile(outputFile);
	if (!file.is_open()) {
		std::cerr << "Failed to open file.\n";
		return 1;
	}
	if (!outfile) {
		std::cerr << "Failed to open outfile.\n";
		return 1;
	}
	
	if (ac == 5)
	{
		std::string	line;
		while (getline(file, line)) {
			outfile << replace(line, s1, s2) << std::endl;
		}
	}
	file.close();
	outfile.close();

	return (0);
}