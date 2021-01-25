/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 04:09:54 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 04:46:22 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

// Structure T_SQUAD

typedef struct      s_squad
{
    ISpaceMarine *      unit;
    struct s_squad *    next;
}                   t_squad;

/*
**  Conctructors
*/

Squad::Squad( void )
{ }

Squad::Squad( Squad const & src )
{ }

/*
**  Destructor
*/

Squad::~Squad( void )
{ }

/*
**  Operators
*/

Squad &     Squad::operator=( Squad const & rhs )
{ }

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
    t_squad *   ptr = this->_squad;

    if ( n < this->_count ) {
        while ( n-- )
            ptr = ptr->next;
        return ptr->unit;
    }
    return NULL;
}

/*
**  Member functions
*/

int             Squad::push( ISpaceMarine* )
{

}
