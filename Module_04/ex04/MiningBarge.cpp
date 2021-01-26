/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 19:09:01 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 20:53:16 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

/*
**  Constructors
*/

MiningBarge::MiningBarge( void ) :
    _lasersCount(0)
{
    for ( int i = 0; i < 4; i++ )
        this->_lasers[i] = NULL;
}

MiningBarge::MiningBarge( MiningBarge const & src )
{
    *this = src;
}

/*
**  Destructor
*/

MiningBarge::~MiningBarge( void )
{
    this->_invNullAll();
}

/*
**  Operators
*/

MiningBarge &   MiningBarge::operator=( MiningBarge const & rhs )
{
    if ( this != &rhs ) this->_copyInvFrom(rhs);
    return *this;
}

/*
**  Accessors
*/

int             MiningBarge::getLasersCount( void ) const
{
    return this->_lasersCount;
}

/*
**  Member functions
*/
// Private:

void            MiningBarge::_copyInvFrom( MiningBarge const & src )
{
    this->_invNullAll();
    for ( int i = 0; i < src.getLasersCount(); i++ )
        this->_lasers[i] = src._lasers[i];
    this->_lasersCount = src.getLasersCount();
}

void            MiningBarge::_invNullAll( void )
{
    for ( int i = 0; i < this->_lasersCount; i++ ) {
        this->_lasers[i] = NULL;
    }
    this->_lasersCount = 0;
}

// Public

void            MiningBarge::equip( IMiningLaser * laser )
{
    if ( this->_lasersCount < 4 )
        this->_lasers[ this->_lasersCount++ ] = laser;
}


void            MiningBarge::mine( IAsteroid * asteroid ) const
{
    for ( int i = 0; i < this->_lasersCount; i++ )
        if ( this->_lasers[ i ] )
            this->_lasers[ i ]->mine(asteroid);
}
