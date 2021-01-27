/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 00:41:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"
#include <iostream>

/*
**  Static functions ===========================================================
*/

/*
**  Constructors ==============================================================
*/

Template::Template( void )
{ }

Template::Template( Template const & src )
{
    *this = src;
}

/*
**  Destructor  ===============================================================
*/

Template::~Template( void )
{ }

/*
**  Operators   ===============================================================
*/

Template &      Template::operator=( Template const & rhs )
{
    if ( this != &rhs ) {
        // Copy
    }
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Template const & rhs )
{
    // Print in os

    return os;
}

/*
**  Getters     ===============================================================
*/

/*
**  Member functions ==========================================================
*/
