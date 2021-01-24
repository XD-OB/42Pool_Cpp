/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:25:52 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:14:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

/*
**  Constructors
*/

Character::Character( void ) :
    _name("John Snow"),
    _ap(40),
    _weapon(NULL)
{ }

Character::Character( std::string const & name ) :
    _name(name),
    _ap(40),
    _weapon(NULL)
{ }

Character::Character( Character const & src )
{
    *this = src;
}

/*
**  Destructor
*/

Character::~Character( void )
{ }

/*
**  Operators
*/

Character &     Character::operator=( Character const & rhs )
{
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_ap = rhs.getAP();
        this->_weapon = rhs.getWeapon();
    }
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Character const & rhs )
{
    os << rhs.getName() << " has " << rhs.getAP() << " AP and ";
    
    if ( rhs.getWeapon() )
        os << "carries a " << rhs.getWeapon()->getName();
    else
        os << "is unarmed";

    os << std::endl;
    return os;
}

/*
**  Accessors:
*/
// Getters:

std::string const &     Character::getName( void ) const
{
    return this->_name;
}

int                     Character::getAP( void ) const
{
    return this->_ap;
}

AWeapon *               Character::getWeapon( void ) const
{
    return this->_weapon;
}

/*
**  Member fonctions
*/

void        Character::recoverAP( void )
{
    if ( this->_ap < 40 ) {
        if ( this->_ap > 30 )
            this->_ap = 40;
        else
            this->_ap += 10;
    }
}

void        Character::equip( AWeapon * weapon )
{
    this->_weapon = weapon;
}

void        Character::attack( Enemy * enemy )
{
    // Unarmed Character
    if ( !this->_weapon || !enemy ) return;

    int     apCost = this->_weapon->getAPCost();
    
    // Reduce AP & print attack
    if ( this->_ap < apCost ) {
        std::cout << this->_name << " doesn't have enough Action Points to attack." << std::endl;
        return ;
    }
    this->_ap -= apCost;
    std::cout << this->_name << " has attack " \
              << enemy->getType() << " with a " \
              << this->_weapon->getName() << "." \
              << std::endl;
    this->_weapon->attack();
    
    // Damage the enemy
    enemy->takeDamage( this->_weapon->getDamage() );
    if ( enemy->getHP() <= 0 )
        delete enemy; 
}


