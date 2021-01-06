/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:59:41 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/06 16:41:41 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_CLASS_H
# define    FIXED_CLASS_H

# include <iostream>

class Fixed {

    private:
        static int const    _nBits;
        int                 _rawBits;
    
    public:
        Fixed( void );
        Fixed( Fixed const & src );
        ~Fixed( void );

        int         getRawBits( void ) const;
        void        setRawBits( int const rawBits );
        Fixed &     operator=( Fixed const & rhs );

};

#endif