/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:10:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/30 17:57:45 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScalar.hpp"
#include <iostream>

/*
**  Static functions ==========================================================
*/

char        transformToChar( std::string & value )
{
    if ( isInteger(value) )

    if ( value.size() != 1 ) throw ConvScalar::ImpossibleException();
    if ( !std::isprint(value[0]) ) throw ConvScalar::NotDisplayableException();

    return value[0];
}

char        transformToInt( std::string & value )
{
    
}

/*
**  Constructors ==============================================================
*/

static bool     isInteger( std::string const & value )
{
    std::string::const_iterator     it = value.begin();
    size_t                          minSize = 0;

    if ( value.size() > 0 && (*it == '+' || *it == '-') ) {
        minSize++;
        it++;
    }

    while ( it != value.end() ) {
        if ( !std::isdigit(*it) ) return false;
        it++;
    }

    return ( value.size() > minSize );
}

static bool     isFloat( std::string const & value )
{
    std::string::const_iterator     it = value.begin();
    bool                            decPoint  =false;
    size_t                          minSize = 0;

    if ( value.size() > 0 && (*it == '+' || *it == '-') ) {
        minSize++;
        it++;
    }
    
    while ( it != value.end() ) {
        if ( *it == '.' ) {
            if ( !decPoint ) decPoint = true;
            else return false;
        }
        else if ( !std::isdigit(*it) )
            if ( !( *it == 'f' && it+1 == value.end() ) ) return false;
        it++;
    }

    return ( value.size() > minSize && decPoint );
}

void *  _getValues( std::string & value )
{
    void *  ptr = NULL;

    if ( isInteger( value ) || isFloat( value ) || value.size() == 1 )
        ptr = &value;

    return ptr;
}



ConvScalar::ConvScalar( void )
{ }

ConvScalar::ConvScalar( std::string & value )
{

    if ( isInteger( value ) ) {
        
    }
        this->_fillWithInt(  ) 

//  Char;
    std::cout << "char: ";
    try
    {
        char    c;
    
        c = ConvScalar::transformToChar( value );
        std::cout << c << std::endl;
    }
    catch ( ConvScalar::ImpossibleException & e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( ConvScalar::NotDisplayableException & e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }

// // Int:
//     try
//     {
//         ConvScalar::transformToChar( value );
//     }
//     catch ( ConvScalar::ImpossibleException & e )
//     {
//         std::cout << e.what() << std::endl;
//     }
//     catch ( ConvScalar::NotDisplayableException & e )
//     {
//         std::cout << e.what() << std::endl;
//     }
//     catch ( std::exception & e )
//     {
//         std::cout << e.what() << std::endl;
//     }

//     if ( value.size() == 1 )
//         this->_c = value[0];
//     this->_i = std::stoi( value );
//     this->_f = std::stof( value );
//     this->_d = std::stod( value );

//     n = atoi(value);

//     std::printf("%d\n", n);
}

ConvScalar::ConvScalar( ConvScalar const & src )
{
    *this = src;
}

/*
**  Destructor  ===============================================================
*/

ConvScalar::~ConvScalar( void )
{ }

/*
**  Operators   ===============================================================
*/

ConvScalar &      ConvScalar::operator=( ConvScalar const & rhs )
{
    if ( this != &rhs ) {
        this->_c = rhs._c;
        this->_c = rhs._i;
        this->_c = rhs._f;
        this->_c = rhs._d;
    }
    return *this;
}

/*
**  Getters     ===============================================================
*/

/*
**  Member functions ==========================================================
*/

/*
**  Exceptions  ===============================================================
*/
// Impossible Exception:

const char *        ConvScalar::ImpossibleException::what( void ) const throw()
{
    return "impossible";   
}

// Not Displayable Exception

const char *        ConvScalar::NotDisplayableException::what( void ) const throw()
{
    return "Non displayable";   
}