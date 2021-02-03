/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:11:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/02/03 19:12:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CONV_SCALAR_H
# define    CONV_SCALAR_H

// Error Macros
# define WRONG_AC 1
# define WRONG_ARG 2

# include <stdexcept>
# include <string>

void    exitUsage( int error );

class   ConvScalar
{
    private:
        void *      _ptr;
        char    _c;
        int     _i;
        float   _f;
        double  _d;
        ConvScalar( void );

    public:
        ConvScalar( std::string & value );
        ConvScalar( ConvScalar const & src );
        
        virtual ~ConvScalar( void );
        void    _transformToChar( std::string & value );
        void    _transformToInt( std::string & value );

        // Operators
        ConvScalar &    operator=( ConvScalar const & rhs );

        // Getters
        char const &    getChar( void ) const;
        int const &     getInt( void ) const;
        float const &   getFloat( void ) const;
        double const &  getDouble( void ) const;

        // Member functions
        char            charValue( void ) const;

        // Exceptions

        class   ImpossibleException : public std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };

        class   NotDisplayableException : std::exception
        {
            public:
                virtual const char *    what( void ) const throw();
        };
};

#endif