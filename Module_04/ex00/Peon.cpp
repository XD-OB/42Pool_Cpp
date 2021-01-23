/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:24:05 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/23 17:06:15 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

/*
**  Constructors
*/

Peon::Peon( void ) : Victim()
{ 
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon( std::string name ) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim(src)
{
    std::cout << "Zog zog." << std::endl;
}

/*
**  Destructor
*/

Peon::~Peon( void )
{
    std::cout << "Bleuark..." << std::endl;
}

/*
**  Operators:
*/

Peon &      Peon::operator=( Peon const & rhs )
{
    if (this != &rhs) this->_name = rhs.getName();
    return *this;
}

/*
**  Members fonctions:
*/

void        Peon::getPolymorphed( void ) const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
