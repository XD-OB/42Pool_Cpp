/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:06:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:50:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"
#include <iostream>

/*
**  Constructors
*/

StripMiner::StripMiner( void )
{ }

StripMiner::StripMiner( StripMiner const & src )
{
    *this = src;
}

/*
**  Destructor
*/

StripMiner::~StripMiner( void )
{ }

/*
**  Operators
*/

StripMiner &    StripMiner::operator=( StripMiner const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Member functions
*/

void            StripMiner::mine( IAsteroid * asteroid )
{
    std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
