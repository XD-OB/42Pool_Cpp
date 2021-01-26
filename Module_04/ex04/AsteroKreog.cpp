/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:58:10 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:43:26 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

/*
**  Constructors
*/

AsteroKreog::AsteroKreog( void )
{ }

AsteroKreog::AsteroKreog( AsteroKreog const & src )
{
    *this = src;
}

/*
**  Destructor
*/

AsteroKreog::~AsteroKreog( void )
{ }

/*
**  Operators
*/

AsteroKreog &           AsteroKreog::operator=( AsteroKreog const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Accessors
*/

std::string             AsteroKreog::getName( void ) const
{
    return "AsteroKreog";
}

/*
**  Member functions
*/

std::string				AsteroKreog::beMined( StripMiner * laser ) const
{
	(void)laser;
	return "Flavium";
}

std::string				AsteroKreog::beMined( DeepCoreMiner * laser ) const
{
	(void)laser;
	return "Dragonite";
}
