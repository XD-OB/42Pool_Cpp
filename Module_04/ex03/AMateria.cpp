/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 02:51:32 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 06:13:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
**  Constructs
*/

AMateria::AMateria( void ) :
    _type("ice"), _xp(0)
{ }

AMateria::AMateria( std::string const & type ) :
    _type(type), _xp(0)
{ }

AMateria::AMateria( AMateria const & src )
{
    *this = src;
}

/*
**  Destructor
*/

AMateria::~AMateria( void )
{ }

/*
**  Operators
*/

AMateria &              AMateria::operator=( AMateria const & rhs )
{
    if ( this != &rhs ) {
        this->_xp = rhs.getXP();
        this->_type = rhs.getType();
    }
    return *this;
}

/*
**  Accessors
*/
// Getters:

std::string const &     AMateria::getType( void ) const
{
    return this->_type;
}

unsigned int            AMateria::getXP( void ) const
{
    return this->_xp;
}
