/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:24:44 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/24 05:06:18 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

/*
**  Constructors
*/

SuperMutant::SuperMutant( void ) :
    Enemy( 170, "Super Mutant" )
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src ) :
    Enemy( src )
{
    *this = src;
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant( int hp, std::string type ) :
    Enemy( hp, type )
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

/*
**  Destructor
*/

SuperMutant::~SuperMutant( void )
{
    std::cout << "Aaargh ..." << std::endl;
}

/*
**  Operators
*/

SuperMutant &   SuperMutant::operator=( SuperMutant const & rhs )
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

void            SuperMutant::takeDamage( int damage )
{
    Enemy::takeDamage( damage - 3 );
}
