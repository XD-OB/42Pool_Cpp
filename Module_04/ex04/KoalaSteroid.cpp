/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:51:56 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:45:06 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

/*
**  Constructors
*/

KoalaSteroid::KoalaSteroid( void )
{ }

KoalaSteroid::KoalaSteroid( KoalaSteroid const & src )
{
    *this = src;
}

/*
**  Destructor
*/

KoalaSteroid::~KoalaSteroid( void )
{ }

/*
**  Operators
*/

KoalaSteroid &      KoalaSteroid::operator=( KoalaSteroid const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Accessors
*/

std::string         KoalaSteroid::getName( void ) const
{
    return "KoalaSteroid";
}

/*
**  Member functions
*/

std::string			KoalaSteroid::beMined( StripMiner * laser ) const
{
	(void)laser;
	return "Tartarite";
}

std::string			KoalaSteroid::beMined( DeepCoreMiner * laser ) const
{
	(void)laser;
	return "Mithril";
}
