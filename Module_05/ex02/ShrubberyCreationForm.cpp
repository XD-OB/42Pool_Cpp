/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 03:18:51 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 06:05:37 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
**  Constructors
*/

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
    Form("Shrubbery Creation Form", 145, 137), _target("unknown")
{ }

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
    Form("Shrubbery Creation Form", 145, 137), _target(target)
{ }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
    Form("Shrubbery Creation Form", 145, 137)
{
    *this = src;
}

/*
**  Destructor
*/

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{ }

/*
**  Operators
*/

ShrubberyCreationForm &     ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
    if ( this != &rhs ) this->_target = rhs.getTarget();
    return *this;
}

/*
**  Accessors
*/
// Getters

std::string const &         ShrubberyCreationForm::getTarget( void )
const {
    return this->_target;
}

/*
**  Member functions
*/

void        ShrubberyCreationForm::beExecuted( void )
const {
    std::ofstream   file( this->_target + "_shrubbery" );

    if ( file.is_open() ) {
        file << "         &&                " << std::endl \
             << "       &&&&&               " << std::endl \
             << "     &&&\\/& &&&           " << std::endl \
             << "    &&|,/  |/& &&          " << std::endl \
             << "     &&/   /  /_&  &&      " << std::endl \
             << "       \\  {  |_____/_&    " << std::endl \
             << "       {  / /          &&& " << std::endl \
             << "       `, \{___________/_&&" << std::endl \
             << "        } }{       \\      " << std::endl \
             << "        }{{         \\____&" << std::endl \
             << "       {}{           `&\\&&" << std::endl \
             << "       {{}             &&  " << std::endl \
             << " , -=-~{ .-^- _            " << std::endl \
             << "       `}                  " << std::endl \
             << "        {  obelouch 2021   " << std::endl;
        
        file.close();
    }
}
