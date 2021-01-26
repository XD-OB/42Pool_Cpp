/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 04:45:24 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:11:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

/*
**  Constructors
*/

Cure::Cure( void ) :
    AMateria("Cure")
{ }

Cure::Cure( Cure const & src ) :
    AMateria("Cure")
{
    *this = src;
}

/*
**  Destructor
*/

Cure::~Cure( void )
{ }

/*
**  Operators
*/

Cure &           Cure::operator=( Cure const & rhs )
{
    if ( this != &rhs ) this->_xp = rhs.getXP();
    return *this;
}

/*
**  Member fonctions
*/

AMateria *      Cure::clone( void ) const
{
    Cure *   clone = new Cure(*this);
    return clone;
}

void            Cure::use( ICharacter & target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}