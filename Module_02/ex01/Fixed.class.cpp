/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:17:02 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/06 17:19:47 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const   Fixed::_nBits = 8;

Fixed::Fixed( void ) : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const n ) : _rawBits(n) {
    std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float f) {

	std::cout << "Float Constructor called" << std::endl;
	this->_rawBits = (int)roundf(f * (1 << this->_nBits));
    std::cout << "round f = " << roundf(f) << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

int         Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}


void        Fixed::setRawBits( int const rawBits ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_rawBits = rawBits;
}

Fixed &     Fixed::operator=( Fixed const & rhs ) {

    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->_rawBits = rhs.getRawBits();
    return *this;
}

std::ostream &  operator<<( std::ostream &os, Fixed const &rhs ) {

    std::cout << "Stream insertion operator called" << std::endl;
    os << rhs.toFloat();
    return os;
}
