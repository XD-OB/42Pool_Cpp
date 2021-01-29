/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:57:53 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:10:26 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FORM_H
# define    FORM_H

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <string>

class   Bureaucrat;

class   Form
{
    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeSign;
        int const           _gradeExec;

        Form(void);

    public:
        Form(
            std::string const & name,
            int const gradeSign,
            int const gradeExec
        );
        Form( Form const & src );
        ~Form( void );

        // Operators
        Form &              operator=( Form const & rhs );

        // Accessors
        std::string const & getName( void ) const;
        bool                isSigned( void ) const;
        int const &         getGradeSign( void ) const;
        int const &         getGradeExec( void ) const;

        // Member functions
        void                beSigned( Bureaucrat bureaucrat );

        // Grade Too High Exception
        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        // Grade Too Low Exception
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };
};

std::ostream &  operator<<( std::ostream & os, Form const & rhs );

#endif