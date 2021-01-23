/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:51:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 19:21:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
**  Constructors
*/

PlasmaRifle::PlasmaRifle( void ) :
    AWeapon( "Plasma Rifle", 5, 21 )
{ }

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


