/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:10:38 by obelouch          #+#    #+#             */
/*   Updated: 2021/02/03 19:22:52 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScalar.hpp"
#include <iostream>
#include <cmath>

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

/*
**  Static functions ==========================================================
*/

// char        transformToInt( std::string & value )
// {
    
// }

/*
**  Constructors ==============================================================
*/

ConvScalar::ConvScalar( void )
{ }

ConvScalar::ConvScalar( std::string & value ) :
    _ptr( NULL )
{
    int     n;
    double  d;
    char    c;

    if ( isInteger(value) ) {
        n = std::stoi( value );
        this->_ptr = &n;
    }
    else if ( isFloat(value) ) {
        d = std::stod( value );
        this->_ptr = &d; 
    }
    else if ( value.size() == 1 ) {
        c = value[0];
        this->_ptr = &c;
    } 
    else {
        
    }

    //  Char;
    std::cout << "char: ";
    try
    {
        this->_transformToChar( value );
        std::cout << this->_c << std::endl;
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

// Int:
    std::cout << "int: ";
    try
    {
        ConvScalar::_transformToInt( value );
        std::cout << this->_c << std::endl;
    }
    catch ( ConvScalar::ImpossibleException & e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }

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
// Private:

void        ConvScalar::_transformToChar( std::string & value )
{
    if ( isInteger(value) ) {
        int     n = std::stoi(value);

        if ( n < 0 && n > 255 ) throw ConvScalar::ImpossibleException();
        this->_c = static_cast<char>(n);
    }
    else if ( isFloat(value) ) {
        double  d = std::stod(value);

        if ( d < 0.0 && d > 255.0 ) throw ConvScalar::ImpossibleException();
        this->_c = static_cast<char>(d);
    }
    else
    {
        if ( value.size() != 1 ) throw ConvScalar::ImpossibleException();
        this->_c = value[0];
    }
    if ( !std::isprint(this->_c) ) throw ConvScalar::NotDisplayableException();
    
}

void        ConvScalar::_transformToInt( std::string & value )
{
    if ( isInteger(value) ) {
        int     n = std::stoi(value);
    
        this->_i = n;
    }
    else if ( isFloat(value) ) {
        double  d = std::stod(value);
    
        this->_i = static_cast<int>(d);
    }
    
    else throw ConvScalar::ImpossibleException();
}

char        ConvScalar::charValue( void )
const {
    char *  c;

    c = reinterpret_cast<char*>(this->_ptr);

    if (  )
}

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