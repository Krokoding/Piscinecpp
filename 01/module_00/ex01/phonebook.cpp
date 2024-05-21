#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
}
PhoneBook::~PhoneBook()
{	
}

void	PhoneBook::set_index( int value ) {
	this->last_index = value;
}
void	PhoneBook::set_size( int value ) {
	this->size = value;
}

void	PhoneBook::addContact(const Contact& new_contact)
{
	if (size < 8)
		PhoneBook::contacts[size++] = new_contact;
	else
	{
		PhoneBook::contacts[last_index] = new_contact;
		last_index++;
		last_index = last_index % 8;
	}
}

void	printColumn(const std::string& columns)
{
	if (columns.length() > 10)
		std::cout << columns.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << std::right << columns;
}

void	PhoneBook::printContact()
{
	int	index_voulu;

	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << std::setw(10) << std::right << i;
			std::cout << "|";
			printColumn(contacts[i].getFname());
			std::cout << "|";
			printColumn(contacts[i].getLname());
			std::cout << "|";
			printColumn(contacts[i].getNname());
			std::cout << "|";
			printColumn(contacts[i].getPnum());
			std::cout << "|";
			printColumn(contacts[i].getSec());
			std::cout << std::endl;
		}
		do
		{
			std::cout << "Saississez un index entre 0 et " << size - 1 << std::endl;
			std::cin >> index_voulu;
			if (std::cin.fail() || index_voulu < 0 || index_voulu >= size)
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Erreur lors de la saisie" << std::endl;
			}
			else
				break;
		} while (true);
		std::cout << "Index: " << index_voulu << std::endl;
		std::cout << "First name: " << contacts[index_voulu].getFname() << std::endl;
		std::cout << "Last name: " << contacts[index_voulu].getLname() << std::endl;
		std::cout << "Nick name: " << contacts[index_voulu].getNname() << std::endl;
		std::cout << "Phone number: " << contacts[index_voulu].getPnum() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index_voulu].getSec() << std::endl;
	}
}

void	PhoneBook::search()
{
	PhoneBook::printContact();
}

