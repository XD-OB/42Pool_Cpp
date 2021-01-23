/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:32:44 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 18:53:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
**  Constructors
*/

AWeapon::AWeapon( void ) :
    _name("None"), _apcost(0), _damage(0)
{ }

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) :
    _name(name), _apcost(apcost), _damage(damage)
{ }

AWeapon::AWeapon( AWeapon const & src )
{
    *this = src;
}

/*
**  Destructors
*/

AWeapon::~AWeapon( void )
{ }

/*
**  Operations
*/

AWeapon &       AWeapon::operator=( AWeapon const & rhs )
{ 
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_apcost = rhs.getAPCost();
        this->_damage = rhs.getDamage();
    }
    return *this;
}

/*
**  Getters
*/

std::string const &     AWeapon::getName( void ) const
{
    return this->_name;
}

int                     AWeapon::getAPCost( void ) const
{
    return this->_apcost;
}

int                     AWeapon::getDamage( void ) const
{
    return this->_damage;
}
