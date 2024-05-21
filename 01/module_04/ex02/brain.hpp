#include <iostream>

class brain
{
public:
	std::string ideas[100];
	brain(/* args */);
	~brain();
};

brain::brain(/* args */)
{
	std::cout << "Brain constructed\n";
}

brain::~brain()
{
	std::cout << "Brain destroyed\n";
}
