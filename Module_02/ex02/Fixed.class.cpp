/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:17:02 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/07 03:24:50 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"


int const   Fixed::_nBits = 8;

Fixed &         Fixed::min( Fixed & fixPoint1, Fixed & fixPoint2 ) {

    return (( fixPoint1 < fixPoint2 ) ? fixPoint1 : fixPoint2);
}

Fixed &         Fixed::max( Fixed & fixPoint1, Fixed & fixPoint2 ) {
    
    return (( fixPoint1 > fixPoint2 ) ? fixPoint1 : fixPoint2);
}

Fixed const &   Fixed::min( Fixed const & fixPoint1, Fixed const & fixPoint2 ) {

    if ( fixPoint1.getRawBits() < fixPoint2.getRawBits() )
        return fixPoint1;
    return fixPoint2;
}

Fixed const &   Fixed::max( Fixed const & fixPoint1, Fixed const & fixPoint2 ) {
    
    if ( fixPoint1.getRawBits() > fixPoint2.getRawBits() )
        return fixPoint1;
    return fixPoint2;
}


//---------------------- Constructors: ----------------------

Fixed::Fixed( void ) : _rawBits(0) {}

Fixed::Fixed( int const n ) {
    this->_rawBits = n << Fixed::_nBits;
}

Fixed::Fixed(float f) {
	this->_rawBits = (int)roundf(f * (1 << Fixed::_nBits));
}

Fixed::Fixed( Fixed const & src ) {
    *this = src;
}

//---------------------- Destructors: ------------------------

Fixed::~Fixed( void ) {}

//---------------------- Accessors: ---------------------------

int         Fixed::getRawBits( void ) const {
    return this->_rawBits;
}

void        Fixed::setRawBits( int const rawBits ) {
    this->_rawBits = rawBits;
}

//------------------------------------------------------------------

int         Fixed::toInt( void ) const {
    return (this->_rawBits >> Fixed::_nBits);
}

float       Fixed::toFloat( void ) const {
    return ((float)this->_rawBits / (1 << Fixed::_nBits)); 
}

//---------------------- Operateurs: ---------------------------

Fixed &     Fixed::operator=( Fixed const & rhs ) {

    if ( this != &rhs )
        this->_rawBits = rhs.getRawBits();
    return *this;
}

////// Arithmetic Operators:

Fixed       Fixed::operator+( Fixed const & rhs ) {
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed       Fixed::operator-( Fixed const & rhs ) {
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed       Fixed::operator*( Fixed const & rhs ) {
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed       Fixed::operator/( Fixed const & rhs ) {
    return Fixed( this->toFloat() / rhs.toFloat() );
}

////// Incr / Decr Operators:

// PRE:
Fixed &     Fixed::operator++( void ) {
    this->_rawBits++;
    return *this;
}      

Fixed &     Fixed::operator--( void ) {
    this->_rawBits--;
    return *this;
} 

// POST:
Fixed       Fixed::operator++( int ) {
    Fixed   cpy = Fixed( *this );
    this->_rawBits++;
    return cpy;
}

Fixed       Fixed::operator--( int ) {
    Fixed   cpy = Fixed( *this );
    this->_rawBits--;
    return cpy;
}

////// Comparaison Operators:

bool        Fixed::operator>( Fixed const & rhs ) {
    return ( this->_rawBits > rhs.getRawBits() );
}

bool        Fixed::operator<( Fixed const & rhs ) {
    return ( this->_rawBits < rhs.getRawBits() );
}

bool        Fixed::operator>=( Fixed const & rhs ) {
    return ( this->_rawBits >= rhs.getRawBits() );
}

bool        Fixed::operator<=( Fixed const & rhs ) {
    return ( this->_rawBits <= rhs.getRawBits() );
}

bool        Fixed::operator==( Fixed const & rhs ) {
    return ( this->_rawBits == rhs.getRawBits() );
}

bool        Fixed::operator!=( Fixed const & rhs ) {
    return ( this->_rawBits != rhs.getRawBits() );
}

////////

std::ostream &  operator<<( std::ostream &os, Fixed const &rhs ) {

    os << rhs.toFloat();
    return os;
}

//------------------------------------------------------------------