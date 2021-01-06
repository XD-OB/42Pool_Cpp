/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:59:41 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/06 17:19:36 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_CLASS_H
# define    FIXED_CLASS_H

# include <iostream>
# include <cmath>

class Fixed {

    private:
        static int const    _nBits;
        int                 _rawBits;
    
    public:
        Fixed( void );
        Fixed( int const n );
        Fixed( float const f );
        Fixed( Fixed const & src );
        ~Fixed( void );

        int         toInt( void ) const;
        float       toFloat( void ) const;
        int         getRawBits( void ) const;
        void        setRawBits( int const rawBits );
        Fixed &     operator=( Fixed const & rhs );

};

std::ostream &  operator<<( std::ostream &os, Fixed const & rhs );

#endif