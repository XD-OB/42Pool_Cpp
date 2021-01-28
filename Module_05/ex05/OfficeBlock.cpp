/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:23 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 00:41:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <iostream>
#include <cstdlib>

/*
**  Constructors ==============================================================
*/

OfficeBlock::OfficeBlock( void ) :
    _intern(NULL),
    _signer(NULL),
    _executor(NULL)
{ }

OfficeBlock::OfficeBlock(
    Intern * intern,
    Bureaucrat * signer,
    Bureaucrat * executor
) :
    _intern(intern),
    _signer(signer),
    _executor(executor)
{ }

OfficeBlock::OfficeBlock( OfficeBlock const & src )
{
    *this = src;
}

/*
**  Destructor  ===============================================================
*/

OfficeBlock::~OfficeBlock( void )
{ }

/*
**  Operators   ===============================================================
*/

OfficeBlock &      OfficeBlock::operator=( OfficeBlock const & rhs )
{
    (void)rhs;
    return *this;
}

/*
**  Accessors    =============================================================
*/
// Getters:

Intern *        OfficeBlock::getIntern( void )
const {
    return this->_intern;
}

Bureaucrat *    OfficeBlock::getSigner( void )
const {
    return this->_signer;
}

Bureaucrat *    OfficeBlock::getExecutor( void )
const {
    return this->_executor;
}

// Setters:

void        OfficeBlock::setIntern( Intern * intern )
{
    this->_intern = intern;
}

void        OfficeBlock::setSigner( Bureaucrat * signer )
{
    this->_signer = signer;
}

void        OfficeBlock::setExecutor( Bureaucrat * executor )
{
    this->_executor = executor;
}

/*
**  Member functions ==========================================================
*/

void        OfficeBlock::doBureaucracy( std::string const & formName, std::string const & target )
{
    Form *  form;

    if ( !this->_intern ) throw OfficeBlock::NoInternException();
    if ( !this->_signer ) throw OfficeBlock::NoSignerException();
    if ( !this->_executor ) throw OfficeBlock::NoExecutorException();

    form = this->_intern->makeForm( formName, target );

    if ( !form ) throw OfficeBlock::FormNotMadeException();

    try
    {
        this->_signer->signForm(*form);
        std::cout << this->_signer->getName() \
                  << " (Grade " << this->_signer->getGrade() << ")" \
                  << " signs a '" << form->getName() << "'" \
                  << "(s.grade " << form->getGradeSign() \
                  << ", ex.grade " << form->getGradeExec() << ") (Unsigned)" \
                  << " targeted '" << target << "'" << std::endl;
    }
    catch ( Form::GradeTooLowException & e )
    {
        throw OfficeBlock::SignerGradeLowException();
    }

    try
    {
        this->_executor->executeForm(*form);
        std::cout << this->_executor->getName() \
                  << " (Grade " << this->_executor->getGrade() << ")" \
                  << " executes a " << *form \
                  << " targeted '" << target << "'" << std::endl;
    }
    catch( Form::GradeTooLowException & e )
    {
        throw OfficeBlock::ExecutorGradeLowException();
    }
}

/*
**  Execeptions   =============================================================
*/
// No intern Exception

const char *    OfficeBlock::NoInternException::what( void )
const throw() {
    return "there is no intern in the Office Block.";
}

// No signer bureaucrat Exeception

const char *    OfficeBlock::NoSignerException::what( void )
const throw() {
    return "There is no signer bureaucrat in the Office Block.";
}

// No executor bureaucrat Exeception

const char *    OfficeBlock::NoExecutorException::what( void )
const throw() {
    return "There is no executor bureaucrat in the Office Block.";
}

// No form made by the intern Exeception

const char *    OfficeBlock::FormNotMadeException::what( void )
const throw() {
    return "The intern can't make this type of forms.";
}

// Signer grade low Exeception

const char *    OfficeBlock::SignerGradeLowException::what( void )
const throw() {
    return "Bureaucrat signer grade is low.";
}

// Executor grade low Exeception

const char *    OfficeBlock::ExecutorGradeLowException::what( void )
const throw() {
    return "Bureaucrat executor grade is low.";
}
