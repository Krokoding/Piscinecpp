#include <cctype>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
	
	public:
		Contact();
		~Contact();

		//getters
		std::string	getFname() const { return first_name; }
		std::string	getLname() const { return last_name; }
		std::string	getNname() const { return nickname; }
		std::string	getPnum() const { return phone_number; }
		std::string	getSec() const { return secret; }

		//setters
		void		set_fn(const std::string& new_name) { first_name = new_name; }
		void		set_ln(const std::string& new_lname) { last_name = new_lname; }
		void		set_nn(const std::string& new_nname) { nickname = new_nname; }
		void		set_pn(const std::string& new_phonenum) { phone_number = new_phonenum; }
		void		set_sec(const std::string& new_secret) { secret = new_secret; }
};