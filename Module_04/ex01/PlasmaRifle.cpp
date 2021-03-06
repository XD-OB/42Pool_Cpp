/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:51:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 22:03:58 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

/*
**  Constructors
*/

PlasmaRifle::PlasmaRifle( void ) :
    AWeapon( "Plasma Rifle", 5, 21 )
{ }

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) :
    AWeapon( "Plasma Rifle", 5, 21 )
{
    *this = src;
}

/*
**  Destructor
*/

PlasmaRifle::~PlasmaRifle( void )
{ }

/*
**  Operators
*/

PlasmaRifle &   PlasmaRifle::operator=( PlasmaRifle const & rhs )
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

void            PlasmaRifle::attack( void ) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
