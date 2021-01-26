/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 04:09:54 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 22:31:29 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

// Structure t_container

struct  t_container
{
    ISpaceMarine *  unit;
    t_container *   next;
};

/*
**  Conctructors
*/

Squad::Squad( void ) :
    _count(0), _squad(NULL)
{ }

Squad::Squad( Squad const & src )
{
    this->_copySquadFrom(src);
}

/*
**  Destructor
*/

Squad::~Squad( void )
{
    this->_destroy();
}

/*
**  Operators
*/

Squad &     Squad::operator=( Squad const & rhs )
{
    if ( this != &rhs ) this->_copySquadFrom(rhs);
    return *this;
}

/*
**  Accessors
*/
// Getters:

int             Squad::getCount( void ) const
{
    return this->_count;
}

ISpaceMarine*   Squad::getUnit( int n ) const
{
    t_container *   ptr = this->_squad;

    if ( n < this->_count ) {
        while ( n-- ) ptr = ptr->next;
        return ptr->unit;
    }
    return NULL;
}

/*
**  Member functions
*/
// Public

t_container *   newContainer( ISpaceMarine * marine )
{
    t_container *   container = new t_container;

    container->unit = marine;
    container->next = NULL;
    return container;
}

int             Squad::push( ISpaceMarine* marine )
{
    t_container *   tmp;

    if ( !marine || this->_isUnitInSquad( marine ) ) return this->_count;

    if ( this->_squad ) {
        tmp = this->_squad;
        while ( tmp->next ) tmp = tmp->next;
        tmp->next = newContainer(marine);
    }
    else this->_squad = newContainer(marine);

    return ++this->_count;
}

// Private

bool            Squad::_isUnitInSquad( ISpaceMarine * marine ) const
{
    t_container *   squad = this->_squad;

    while ( squad ) {
        if ( squad->unit == marine ) return true;
        squad = squad->next;
    }
    return false;
}

void            Squad::_copySquadFrom( Squad const & src )
{
    this->_destroy();
    for ( int i = 0; i < src.getCount(); i++ )
        push( src.getUnit(i) );
    this->_count = src.getCount();
}

void            Squad::_destroy( void )
{
    t_container *   tmp;

    while ( this->_squad ) {
        delete this->_squad->unit;
        tmp = this->_squad;
        this->_squad = this->_squad->next;
        delete tmp;
    }
    this->_count = 0;
}