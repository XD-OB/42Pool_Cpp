/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:30:45 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:17:57 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

/*
**  Constructors
*/

Enemy::Enemy( void ) :
    _hp(100000), _type("God")
{
    std::cout << "* Angry Huge Creature * Impossible" << std::endl;
}

Enemy::Enemy( int hp, std::string const & type ) :
    _hp(hp), _type(type)
{ }

Enemy::Enemy( Enemy const & src )
{
    *this = src;
}

/*
**  Destructor
*/

Enemy::~Enemy( void )
{ }

/*
**  Operators
*/

Enemy &     Enemy::operator=( Enemy const & rhs )
{
    if ( this != &rhs ) {
        this->_hp = rhs.getHP();
        this->_type = rhs.getType();
    }
    return *this;
}

/*
**  Getters
*/

int                     Enemy::getHP( void ) const
{
    return this->_hp;
}

std::string const &     Enemy::getType( void ) const
{
    return this->_type;
}

/*
**  Take Damage
*/

void        Enemy::takeDamage( int damage )
{
    if ( damage > 0 ) {
        if ( damage > this->_hp ) {
            this->_hp = 0;
        } else {
            this->_hp -= damage;
        }
    }
}
