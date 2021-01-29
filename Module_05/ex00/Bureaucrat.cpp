/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:08:24 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

/*
**  Grade Too High Exception
*/

const char *        Bureaucrat::GradeTooHighException::what( void )
const throw() {
    return "Grade too High for the bureaucrat assignement!";
}

/*
**  Grade Too Low Exception
*/

const char *        Bureaucrat::GradeTooLowException::what( void )
const throw() {
    return "Grade too Low for the bureaucrat assignement!";
}

/*
**  Constructors
*/

Bureaucrat::Bureaucrat( void ) :
    _name("John Snow"), _grade(1)
{ }

Bureaucrat::Bureaucrat( std::string const & name, int grade ) :
    _name(name), _grade(grade)
{
    if ( grade < 1 ) throw Bureaucrat::GradeTooHighException();
    else if ( grade > 150 ) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
    *this = src;
}

/*
**  Destructor
*/

Bureaucrat::~Bureaucrat( void )
{ }

/*
**  Operators
*/

Bureaucrat &    Bureaucrat::operator=( Bureaucrat const & rhs )
{
    if ( this != &rhs ) this->_grade = rhs.getGrade();
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Bureaucrat const & rhs )
{
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return os;
}

/*
**  Getters
*/

std::string const &     Bureaucrat::getName( void )
const {
    return this->_name;
}

int                     Bureaucrat::getGrade( void )
const {
    return this->_grade;
}

/*
**  Member functions
*/

void            Bureaucrat::incrementGrade( void )
{
    if ( this->_grade <= 1 ) throw Bureaucrat::GradeTooHighException();
    else this->_grade--; 
}

void            Bureaucrat::decrementGrade( void )
{
    if ( this->_grade >= 150 ) throw Bureaucrat::GradeTooLowException();
    else this->_grade++;
}
