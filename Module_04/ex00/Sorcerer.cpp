/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:08:29 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 17:09:02 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

/*
**  Constructors:
*/

Sorcerer::Sorcerer( void ) :
    _name( "John Snow" ), _title( "-" )
{
    std::cout << "A Sorcerer whitout a name and title is born ... Poor boy." << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title ) :
    _name( name ), _title( title )
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
    *this = src;
    std::cout << "A copy of a sorcerer!! nice trick." << std::endl;
}

/*
**  Destructor:
*/

Sorcerer::~Sorcerer( void )
{
    std::cout << this->_name << ", " << this->_title \
              << ", is dead. Consequences will never be the same!" \
              << std::endl;
}

/*
**  Accessors:
*/
// Getters:

std::string     Sorcerer::getName( void )
const {
    return this->_name;
}

std::string     Sorcerer::getTitle( void )
const {
    return this->_title;
}

//Setters:

void            Sorcerer::setName( std::string name )
{
    if ( !name.empty() ) this->_name = name;
}

void            Sorcerer::setTitle( std::string title )
{
    if ( !title.empty() ) this->_title = title;
}

/*
**  Operators:
*/

Sorcerer &      Sorcerer::operator=( Sorcerer const & rhs )
{
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_title = rhs.getTitle();
    }
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Sorcerer const & rhs )
{
    os << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}

/*
**  Member fonctions:
*/

void            Sorcerer::polymorph( Victim const & victim )
const {
    victim.getPolymorphed();
}
