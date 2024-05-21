#include "wrongCat.hpp"

int main()
{
	Animal *animalTable[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			animalTable[i] = new Dog();
		}
		else
		{
			animalTable[i] = new Cat();
		}
	}
	for (int j = 0; j < 10; j++)
	{
		animalTable[j]->makeSound();
	}
	for (int j = 0; j < 10; j++)
	{
		delete animalTable[j];
	}
}