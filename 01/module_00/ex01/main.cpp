#include "phonebook.hpp"


Contact	createContact(void)
{
	Contact		new_contact;
	std::string	input;

	std::cout << "First name: " << std::endl;
	std::cin >> input;
	new_contact.set_fn(input);

	std::cout << "Last name: " << std::endl;
	std::cin >> input;
	new_contact.set_ln(input);

	std::cout << "Nick name: " << std::endl;
	std::cin >> input;
	new_contact.set_nn(input);

	std::cout << "Phone number: " << std::endl;
	std::cin >> input;
	new_contact.set_pn(input);

	std::cout << "Darkest secret: " << std::endl;
	std::cin >> input;
	new_contact.set_sec(input);

	return (new_contact);
}

int main()
{
	std::string	user_in;
	PhoneBook	myPhoneBook;

	myPhoneBook.set_index(0);
	myPhoneBook.set_size(0);
	while (user_in != "EXIT")
	{
		std::cout << "Entrez ADD pour ajouter, SEARCH pour chercher ou EXIT pour quitter le programme" << std::endl;
		std::cout << "Votre sélection: ";
		std::cin >> user_in;
		if (user_in == "SEARCH")
			myPhoneBook.search();
		else if (user_in == "ADD")
			myPhoneBook.addContact(createContact());
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Erreur lors de la saisie" << std::endl;
		}
	}
}