/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 05:14:34 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:05:59 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

/*
**  Constructors
*/

PresidentialPardonForm::PresidentialPardonForm( void ) :
    Form("Presidential Pardon Form", 25, 5), _target("unknown")
{ }

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
    Form("Presidential Pardon Form", 25, 5), _target(target)
{ }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
    Form("Presidential Pardon Form", 25, 5)
{
    *this = src;
}

/*
**  Destructor
*/

PresidentialPardonForm::~PresidentialPardonForm( void )
{ }

/*
**  Operators
*/

PresidentialPardonForm &     PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
    if ( this != &rhs ) this->_target = rhs.getTarget();
    return *this;
}

/*
**  Accessors
*/
// Getters

std::string const &         PresidentialPardonForm::getTarget( void )
const {
    return this->_target;
}

/*
**  Member functions
*/

void        PresidentialPardonForm::beExecuted( void )
const {
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
