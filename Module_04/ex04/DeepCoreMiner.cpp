/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:06:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 18:51:04 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include <iostream>

/*
**  Constructors
*/

DeepCoreMiner::DeepCoreMiner( void )
{ }

DeepCoreMiner::DeepCoreMiner( DeepCoreMiner const & src )
{
    *this = src;
}

/*
**  Destructor
*/

DeepCoreMiner::~DeepCoreMiner( void )
{ }

/*
**  Operators
*/

DeepCoreMiner &    DeepCoreMiner::operator=( DeepCoreMiner const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Member functions
*/

void            DeepCoreMiner::mine( IAsteroid * asteroid )
{
    std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}
