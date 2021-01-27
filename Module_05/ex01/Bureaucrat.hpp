/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 03:14:30 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     BUREAUCRAT_H
# define    BUREAUCRAT_H

#include "Form.hpp"
#include <stdexcept>
#include <string>

class   Form;

class   Bureaucrat
{
    private:
        std::string     _name;
        int             _grade;
        
        Bureaucrat( void );

    public:
        Bureaucrat( std::string _name, int _grade );
        Bureaucrat( Bureaucrat const & src );
        ~Bureaucrat( void );

        // Operators
        Bureaucrat &    operator=( Bureaucrat const & rhs );

        // Getters
        std::string const &     getName( void ) const;
        int                     getGrade( void ) const;

        // Member functions
        void            incrementGrade( void );
        void            decrementGrade( void );
        void            signForm( Form & form );

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

std::ostream &      operator<<( std::ostream & os, Bureaucrat const & rhs );

#endif