/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:40:44 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:18:52 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

/*
**  Constructors:
*/

Victim::Victim( void ) :
    _name( "John Snow" )
{
    std::cout << "Some random victim whitout a name just appeared!." << std::endl;
}

Victim::Victim( std::string const & name) :
    _name( name )
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( Victim const & src )
{
    *this = src;
    std::cout << "Some copy of a Victim!! WHAT?!!." << std::endl;
}

/*
**  Destructor:
*/

Victim::~Victim( void )
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

/*
**  Accessors:
*/
// Getters:

std::string     Victim::getName( void )
const {
    return this->_name;
}

//Setters:

void            Victim::setName( std::string const & name )
{
    if ( !name.empty() ) this->_name = name;
}

/*
**  Operators:
*/

Victim &      Victim::operator=( Victim const & rhs )
{
    if ( this != &rhs ) this->_name = rhs.getName();
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Victim const & rhs )
{
    os << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return os;
}

/*
**  Member fonctions:
*/

void            Victim::getPolymorphed( void )
const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
