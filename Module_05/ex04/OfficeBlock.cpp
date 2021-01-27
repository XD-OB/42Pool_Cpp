/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 00:41:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <iostream>

/*
**  Static functions ===========================================================
*/

/*
**  Constructors ==============================================================
*/

OfficeBlock::OfficeBlock( void )
{ }

OfficeBlock::OfficeBlock( OfficeBlock const & src )
{
    *this = src;
}

/*
**  Destructor  ===============================================================
*/

OfficeBlock::~OfficeBlock( void )
{ }

/*
**  Operators   ===============================================================
*/

OfficeBlock &      OfficeBlock::operator=( OfficeBlock const & rhs )
{
    if ( this != &rhs ) {
        // Copy
    }
    return *this;
}

std::ostream &  operator<<( std::ostream & os, OfficeBlock const & rhs )
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
