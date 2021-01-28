/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:22:27 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/27 23:49:09 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     OFFICEBLOCK_H
# define    OFFICEBLOCK_H

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include <stdexcept>
# include <string>


class   OfficeBlock
{
    private:
        Intern *        _intern;
        Bureaucrat *    _signer;
        Bureaucrat *    _executor;

        OfficeBlock( OfficeBlock const & src );
        OfficeBlock &      operator=( OfficeBlock const & rhs );

    public:
        OfficeBlock( void );
        OfficeBlock(
            Intern * intern,
            Bureaucrat * signer,
            Bureaucrat * executor
        );
        virtual ~OfficeBlock( void );

        // Setters
        void        setIntern( Intern & intern );
        void        setSigner( Bureaucrat & signer );
        void        setExecutor( Bureaucrat & executor );

        // Member functions
        void        doBureaucracy(
            std::string const & formName,
            std::string const & target
        );

        // Exceptions:

        ////    No Intern:
        class   NoInternException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        ////    No Signer:
        class   NoSignerException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        ////    No Executor
        class   NoExecutorException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        ////    Form Not Made
        class   FormNotMadeException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        ////    Signer Grade Low
        class   SignerGradeLowException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        ////    Executor Grade Low
        class   ExecutorGradeLowException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };
};

std::ostream &      operator<<( std::ostream & os, OfficeBlock const & rhs );

#endif