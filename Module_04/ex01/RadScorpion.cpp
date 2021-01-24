/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:58:34 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:07:21 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include <iostream>

/*
**  Constructors
*/

RadScorpion::RadScorpion( void ) :
    Enemy( 80, "RadScorpion" )
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src ) :
    Enemy( src )
{
    *this = src;
    std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( int hp, std::string type ) :
    Enemy( hp, type )
{
    std::cout <<  "* click click click *" << std::endl;
}

/*
**  Destructor
*/

RadScorpion::~RadScorpion( void )
{
    std::cout << "* SPROTCH *" << std::endl;
}

/*
**  Operators
*/

RadScorpion &   RadScorpion::operator=( RadScorpion const & rhs )
{
    if ( this != &rhs ) {
        this->_hp = rhs.getHP();
        this->_type = rhs.getType();
    }
    return *this;
}

/*
**  Member functions
*/

void            RadScorpion::takeDamage( int damage )
{
    Enemy::takeDamage( damage );
}