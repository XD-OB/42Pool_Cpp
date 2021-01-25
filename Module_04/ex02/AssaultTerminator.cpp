/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:05:35 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 17:23:43 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

/*
**  Constructors
*/

AssaultTerminator::AssaultTerminator( void )
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
    *this = src;
    std::cout << "* teleports from space *" << std::endl;
}

/*
**  Destructors
*/

AssaultTerminator::~AssaultTerminator( void )
{
    std::cout << "I'll be back ..." << std::endl;
}

/*
**  Operators
*/

AssaultTerminator &    AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Member functions
*/

ISpaceMarine*       AssaultTerminator::clone( void ) const
{
    return new AssaultTerminator(*this);
}

void                AssaultTerminator::battleCry( void ) const
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
}

void                AssaultTerminator::rangedAttack( void ) const
{
    std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack( void ) const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}
