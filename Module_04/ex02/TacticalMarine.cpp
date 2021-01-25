/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:05:35 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/25 17:22:40 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

/*
**  Constructors
*/

TacticalMarine::TacticalMarine( void )
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
    *this = src;
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

/*
**  Destructors
*/

TacticalMarine::~TacticalMarine( void )
{
    std::cout << "Aaargh ..." << std::endl;
}

/*
**  Operators
*/

TacticalMarine &    TacticalMarine::operator=( TacticalMarine const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Member functions
*/

ISpaceMarine*       TacticalMarine::clone( void ) const
{
    return new TacticalMarine(*this);
}

void                TacticalMarine::battleCry( void ) const
{
    std::cout << "For the Holy PLOT!" << std::endl;
}

void                TacticalMarine::rangedAttack( void ) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack( void ) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
