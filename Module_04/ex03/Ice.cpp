/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 04:45:24 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:14:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

/*
**  Constructors
*/

Ice::Ice( void ) :
    AMateria("ice")
{ }

Ice::Ice( Ice const & src ) :
    AMateria("ice")
{
    *this = src;
}

/*
**  Destructor
*/

Ice::~Ice( void )
{ }

/*
**  Operators
*/

Ice &           Ice::operator=( Ice const & rhs )
{
    if ( this != &rhs ) this->_xp = rhs.getXP();
    return *this;
}

/*
**  Member fonctions
*/

AMateria *      Ice::clone( void ) const
{
    Ice *   clone = new Ice(*this);
    return clone;
}

void            Ice::use( ICharacter & target )
{
    std::cout << "* shoots an ice bolt at " \
              << target.getName() << " *" << std::endl;
}