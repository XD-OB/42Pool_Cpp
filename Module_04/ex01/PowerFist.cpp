/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:08:04 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 22:29:32 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

/*
**  Constructors
*/

PowerFist::PowerFist( void ) :
    AWeapon( "Power Fist", 8, 50 )
{ }

PowerFist::PowerFist( std::string name, int apcost, int damage ) :
    AWeapon( name, apcost, damage )
{
    std::cout << "WARNING!! A change in the weapon is made internaly." << std::endl;
}

PowerFist::PowerFist( PowerFist const & src ) :
    AWeapon( "Power Fist", 8, 50 )
{
    *this = src;
}

/*
**  Destructor
*/

PowerFist::~PowerFist( void )
{ }

/*
**  Operators
*/

PowerFist &   PowerFist::operator=( PowerFist const & rhs )
{
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_apcost = rhs.getAPCost();
        this->_damage = rhs.getDamage();
    }
    return *this;
}

/*
**  Member functions
*/

void            PowerFist::attack( void ) const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}
