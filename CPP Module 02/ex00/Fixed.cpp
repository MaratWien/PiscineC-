#include "Fixed.hpp"

const int Fixed::Bits = 8;

Fixed::Fixed(void): value(0) {
	
	std::cout << "Default constructor called" << '\n';

}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << '\n';

}



