#include "iter.hpp"

template<typename T, typename F>
void	iter(T* array, size_t length, F function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}
template<typename T>
void	incrementElement( T& e)
{
	++e;
}
template<typename T>
void	printElement( const T& e)
{
	std::cout << e << std::endl;
}

int main( void )
{
	int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Original intArray: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Original doubleArray: ";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    std::cout << "Original charArray: ";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    iter(intArray, 5, incrementElement<int>);
    iter(doubleArray, 5, incrementElement<double>);
    iter(charArray, 5, incrementElement<char>);

    std::cout << "Incremented intArray: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Incremented doubleArray: ";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    std::cout << "Incremented charArray: ";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    return 0;
}