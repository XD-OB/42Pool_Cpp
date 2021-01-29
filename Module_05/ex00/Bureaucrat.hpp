/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/29 15:06:33 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     BUREAUCRAT_H
# define    BUREAUCRAT_H

#include <stdexcept>
#include <string>


class   Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
        
        Bureaucrat( void );

    public:
        Bureaucrat(
            std::string const & name,
            int grade
        );
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

        // Exceptions:
    
        ////    Grade Too High Exception
        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char *    what() const throw();
        };

        ////    Grade Too Low Exception
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char *    what() const throw();
        };
};

std::ostream &      operator<<( std::ostream & os, Bureaucrat const & rhs );

#endif