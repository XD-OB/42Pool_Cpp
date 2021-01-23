/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noble.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:24:05 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 17:06:15 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Noble.hpp"
#include <iostream>

/*
**  Constructors
*/

Noble::Noble( void ) : Victim()
{ 
    std::cout << "Money can buy you happiness." << std::endl;
}

Noble::Noble( std::string name ) : Victim(name)
{
    std::cout << "Money can buy you happiness." << std::endl;
}

Noble::Noble( Noble const & src ) : Victim(src)
{
    std::cout << "Money can buy you happiness." << std::endl;
}

/*
**  Destructor
*/

Noble::~Noble( void )
{
    std::cout << "Aghgh Eghgh..." << std::endl;
}

/*
**  Operators:
*/

Noble &      Noble::operator=( Noble const & rhs )
{
    if (this != &rhs) this->_name = rhs.getName();
    return *this;
}

/*
**  Members fonctions:
*/

void        Noble::getPolymorphed( void ) const
{
    std::cout << this->_name << " has been turned into a big fat pig!" << std::endl;
}
