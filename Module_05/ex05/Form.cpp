/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:57:50 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:58:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

/*
**  Exceptions
*/
// Not Signed
const char *        Form::NotSignedException::what( void )
const throw() {
    return "it's not signed.";
}


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

Form::Form( std::string const & name, int gradeSign, int gradeExec ) :
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

Form::Form( Form const & src )
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
    if ( this != &rhs ) {
        this->_name = rhs.getName();
        this->_isSigned = rhs.isSigned();
        this->_gradeSign = rhs.getGradeSign();
        this->_gradeExec = rhs.getGradeExec();
    }
    return *this;
}

std::ostream &  operator<<( std::ostream & os, Form const & rhs )
{
    os << "'" << rhs.getName() \
       << "' (s.grade " << rhs.getGradeSign() \
       << ", ex.grade " << rhs.getGradeExec() << ") ";

    if ( rhs.isSigned() ) os << "(Signed)";
    else                  os << "(Unsigned)";

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

int                 Form::getGradeSign( void )
const {
    return this->_gradeSign;
}

int                 Form::getGradeExec( void )
const {
    return this->_gradeExec;
}

/*
**  Member functions
*/

void        Form::beExecuted( void )
const { }

void        Form::beSigned( Bureaucrat bureaucrat )
{
    // Verify bureaucrat grade
    if ( bureaucrat.getGrade() > this->_gradeSign )
        throw Form::GradeTooLowException();

    // Sign the form
    this->_isSigned = true;
}


void        Form::execute( Bureaucrat executor )
{
    // Check form signature
    if ( !this->_isSigned )
        throw Form::NotSignedException();

    // Verify executor grade
    if ( executor.getGrade() > this->_gradeExec )
        throw Form::GradeTooLowException();

    this->beExecuted();
}
