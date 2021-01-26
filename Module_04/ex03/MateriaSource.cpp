/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 05:12:37 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 17:57:30 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

/*
**  Constructors
*/

MateriaSource::MateriaSource( void ) :
    _invSize(0)
{
    for ( int i = 0; i < 4; i++ )
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    *this = src;
}

/*
**  Destructor
*/

MateriaSource::~MateriaSource( void )
{
    this->_invFree();
}

/*
**  Operators
*/

MateriaSource &     MateriaSource::operator=( MateriaSource const & rhs )
{
    if ( this != &rhs ) this->_copyInvFrom(rhs);
    return *this;
}

/*
**  Accessors
*/

int         MateriaSource::getInvSize( void ) const
{
    return this->_invSize;
}

/*
**  Member functions  
*/
// Private:

void        MateriaSource::_copyInvFrom( MateriaSource const & src )
{
    this->_invFree();
    for ( int i = 0; i < src.getInvSize(); i++ )
        this->_inventory[i] = src._inventory[i]->clone();
    this->_invSize = src.getInvSize();
}

void        MateriaSource::_invFree( void )
{
    for ( int i = 0; i < this->_invSize; i++ ) {
        delete this->_inventory[i];
        this->_inventory[i] = NULL;
    }
    this->_invSize = 0;
}

// Public:

void        MateriaSource::learnMateria( AMateria * m )
{
    if ( this->_invSize < 3 ) {
        this->_inventory[ this->_invSize ] = m;
        this->_invSize++;
    }
}

AMateria *  MateriaSource::createMateria( std::string const & type )
{
    if (type == "ice") return new Ice();
    if (type == "cure") return new Cure();
    return NULL;
}