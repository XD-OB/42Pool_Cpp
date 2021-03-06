/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:17:02 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/06 18:20:23 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const   Fixed::_nBits = 8;

Fixed::Fixed( void ) : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const n ) {
    std::cout << "Int Constructor called" << std::endl;
    this->_rawBits = n << Fixed::_nBits;
}

Fixed::Fixed(float f) {

	std::cout << "Float Constructor called" << std::endl;
	this->_rawBits = (int)roundf(f * (1 << Fixed::_nBits));
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

int         Fixed::toInt( void ) const {
    return (this->_rawBits >> Fixed::_nBits);
}

float       Fixed::toFloat( void ) const {
    return ((float)this->_rawBits / (1 << Fixed::_nBits)); 
}

Fixed &     Fixed::operator=( Fixed const & rhs ) {

    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->_rawBits = rhs.getRawBits();
    return *this;
}

std::ostream &  operator<<( std::ostream &os, Fixed const &rhs ) {

    os << rhs.toFloat();
    return os;
}
