/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 00:19:12 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <cstdlib>

// Supp Functions:

Form *   createPresidentialPardonForm( std::string const & target )
{
    return new PresidentialPardonForm(target); 
}

Form *   createRobotomyRequestForm( std::string const & target )
{
    return new RobotomyRequestForm(target);
}

Form *   createShrubberyCreationForm( std::string const & target )
{
    return new ShrubberyCreationForm(target);
}

/*
**  Static functions ===========================================================
*/
// Private

t_work      Intern::_works[3] = {
    {
        "presidential pardon",
        &createPresidentialPardonForm,
    },
    {
        "robotomy request",
        &createRobotomyRequestForm,
    },
    {
        "shrubbery creation",
        &createShrubberyCreationForm,
    }
};

/*
**  Constructors ===============================================================
*/

Intern::Intern( void )
{ }

Intern::Intern( Intern const & src )
{
    *this = src;
}

/*
**  Destructor  ================================================================
*/

Intern::~Intern( void )
{ }

/*
**  Operators   ================================================================
*/

Intern &        Intern::operator=( Intern const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Member functions ===========================================================
*/

Form *          Intern::makeForm( std::string const & formName, std::string const & target )
const {
    Form *  work = NULL;

    for ( int i = 0; i < 3; i++ )
        if ( Intern::_works[ i ].formName == formName )
            work = Intern::_works[i].func(target);

    if ( work != NULL )
        std::cout << "Intern creates " << work->getName() << std::endl;
    else
        std::cout << "Intern can't create this type of form" << std::endl;    

    return work;
}
