/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 03:36:26 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 05:49:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**  Constructors
*/

Character::Character( void ) :
    _name("John Snow"), _invSize(0)
{
    for ( int i = 0; i < 4; i++ )
        this->_inventory[i] = NULL;
}

Character::Character( std::string name ) :
    _name(name), _invSize(0)
{
    for ( int i = 0; i < 4; i++ )
        this->_inventory[i] = NULL;
}

Character::Character( Character const & src )
{
    *this = src;
}

/*
**  Destructor
*/

Character::~Character( void )
{
    this->_invFree();
}

/*
**  Operators
*/

Character &     Character::operator=( Character const & rhs )
{
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_copyInvFrom(rhs);
    }
    return *this;
}

/*
**  Accessors
*/

std::string const &     Character::getName( void ) const
{
    return this->_name;
}

int                     Character::getInvSize( void ) const
{
    return this->_invSize;
}

/*
**  Member function
*/
// Private:

void            Character::_copyInvFrom( Character const & src )
{
    this->_invFree();
    for ( int i = 0; i < src.getInvSize(); i++ )
        this->_inventory[i] = src._inventory[i]->clone();
    this->_invSize = src.getInvSize();
}

void            Character::_invFree( void )
{
    for ( int i = 0; i < this->_invSize; i++ ) {
        delete this->_inventory[i];
        this->_inventory[i] = NULL;
    }
    this->_invSize = 0;
}

// Public:

void            Character::equip( AMateria * m )
{
    if ( this->_invSize < 3 )
        this->_inventory[ this->_invSize++ ] = m;
}

void            Character::unequip( int idx )
{
    if ( idx >= 0 && idx < 4 )
        this->_inventory[ idx ] = NULL;
}

void            Character::use( int idx, ICharacter & target )
{
    if ( idx >= 0 && idx < this->_invSize && this->_inventory[ idx ] )
        this->_inventory[ idx ]->use(target);
}