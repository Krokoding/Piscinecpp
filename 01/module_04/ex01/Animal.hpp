#include "iostream"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal( ) : _type("unknown") {}
		virtual ~Animal();
		std::string getType( void ) const {
			return this->_type;
		}
		Animal& operator=(const Animal& other) {
	if (this != &other) {
		_type = other._type;
	}
	return (*this);
}
		virtual void makeSound( void ) const {
			std::cout << "Some random animal sound\n";
		};
};