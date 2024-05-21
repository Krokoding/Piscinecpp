#include <cctype>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

#include "contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		size;
		int		last_index;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(const Contact& new_contact);
		void	search();
		void	exit();
		void	printContact();
		void	set_index( int value );
		void	set_size( int value );

};