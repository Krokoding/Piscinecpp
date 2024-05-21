#include "iostream"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal( ) : _type("unknown") {}
		~Animal();
		std::string getType( void ) const {
			return this->_type;
		}
		virtual void makeSound( void ) const {
			std::cout << "Some random animal sound\n";
		};
};
