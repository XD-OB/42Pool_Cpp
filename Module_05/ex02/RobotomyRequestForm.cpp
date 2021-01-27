/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 04:59:39 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:05:52 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*
**  Constructors
*/

RobotomyRequestForm::RobotomyRequestForm( void ) :
    Form("Roboto My Request Form", 72, 45), _target("unknown")
{
    srand( time(NULL) );
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
    Form("Roboto My Request Form", 72, 45), _target(target)
{
    srand( time(NULL) );
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
    Form("Roboto My Request Form", 72, 45)
{
    srand( time(NULL) );
    *this = src;
}

/*
**  Destructor
*/

RobotomyRequestForm::~RobotomyRequestForm( void )
{ }

/*
**  Operators
*/

RobotomyRequestForm &     RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
    if ( this != &rhs ) this->_target = rhs.getTarget();
    return *this;
}

/*
**  Accessors
*/
// Getters

std::string const &         RobotomyRequestForm::getTarget( void )
const {
    return this->_target;
}

/*
**  Member functions
*/

void        RobotomyRequestForm::beExecuted( void )
const {
    if ( rand() % 5 == 2 )
        std::cout << "* TRrrrrRrrrr * " << this->_target << " has been robotomized succefully!" << std::endl;
    else
        std::cout << "* Biip * Error robotomizing process failed!" << std::endl;
}
