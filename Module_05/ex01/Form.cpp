/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:57:50 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:14:00 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

/*
**  Exceptions
*/
// Grade Too High:

const char *        Form::GradeTooHighException::what( void )
const throw() {
    return "Grade too High.";
}

//  Grade Too Low Exception

const char *        Form::GradeTooLowException::what( void )
const throw() {
    return "Grade too Low.";
}

/*
**  Constructors
*/

Form::Form( void ) :
    _name("John Snow"),
    _isSigned(false),
    _gradeSign(1),
    _gradeExec(1)
{ }

Form::Form(
    std::string const & name,
    int const gradeSign,
    int const gradeExec
) :
    _name(name),
    _isSigned(false),
    _gradeSign(gradeSign),
    _gradeExec(gradeExec)
{
    if ( gradeSign < 1 || gradeExec < 1 )
        throw Form::GradeTooHighException();
    if ( gradeSign > 150 || gradeExec > 150 )
        throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) :
    _name(src.getName()),
    _isSigned(src.isSigned()),
    _gradeSign(src.getGradeSign()),
    _gradeExec(src.getGradeExec())
{
    *this = src;
}

/*
**  Destructor
*/

Form::~Form( void )
{ }

/*
**  Operators
*/

Form &      Form::operator=( Form const & rhs )
{
    (void)rhs;
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Form const & rhs )
{
    os << "Form '" << rhs.getName() << "' that require a grade higher than " \
       << rhs.getGradeSign() << " for signature, and " << rhs.getGradeExec() \
       << " for execution, is ";

    if ( rhs.isSigned() ) os << "signed";
    else                  os << "not signed";

    return os;
}

/*
**  Accessors
*/
// Getters

std::string const & Form::getName( void )
const {
    return this->_name;
}

bool                Form::isSigned( void )
const {
    return this->_isSigned;
}

int const &         Form::getGradeSign( void )
const {
    return this->_gradeSign;
}

int const &         Form::getGradeExec( void )
const {
    return this->_gradeExec;
}

/*
**  Member functions
*/

void        Form::beSigned( Bureaucrat bureaucrat )
{
    // Verify bureaucrat grade
    if ( bureaucrat.getGrade() > this->_gradeSign )
        throw Form::GradeTooLowException();

    // Sign the form
    this->_isSigned = true;
}
